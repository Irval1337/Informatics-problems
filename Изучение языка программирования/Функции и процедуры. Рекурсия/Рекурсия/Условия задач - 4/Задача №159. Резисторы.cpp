#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <unordered_map>
#include <list>

using namespace std;

double best_ans = -1e9;
double absolute_C;

//unordered_map<list<double>, bool> used;

void f(vector<double> containers) {
    //for (auto it1 = containers.begin(); it1 != containers.end(); it1++) cout << *it1 << " ";
    //cout << endl;

    for (int i = 0; i < containers.size(); i++) {
        for (int j = 0; j < containers.size(); j++) {
            if (i == j) continue;

            auto tmp = containers;
            tmp[i] = tmp[i] + tmp[j];
            if (fabs(tmp[i] - absolute_C) < fabs(best_ans - absolute_C))
                best_ans = tmp[i];
            tmp.erase(tmp.begin() + j);

            f(tmp);

            tmp = containers;
            tmp[i] = tmp[i] * tmp[j] / (tmp[i] + tmp[j]);
            if (fabs(tmp[i] - absolute_C) < fabs(best_ans - absolute_C))
                best_ans = tmp[i];
            tmp.erase(tmp.begin() + j);

            f(tmp);
        }
    }
}

int main() {
    long long N;
    cin >> N;

    double C;
    cin >> C;

    absolute_C = C;
    
    vector<double> containers;
    for (int i = 0; i < N; i++) {
        double num;
        cin >> num;
        containers.push_back(num);

        if (fabs(num - absolute_C) < fabs(best_ans - absolute_C))
            best_ans = num;
    }

    f(containers);
    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << best_ans;
}