#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> mas;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        mas.push_back(num);
    }

    for (int i = 0; i < N; i++)
        if (mas[i] % 2 == 0)
            cout << mas[i] << " ";
}