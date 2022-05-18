#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

void reverse(vector<int>& mas) {
    for (int i = 0; i < mas.size() / 2; i++)
        swap(mas[i], mas[mas.size() - i - 1]);
}

int main() {
    int N;
    cin >> N;
    vector<int> mas;
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        mas.push_back(num);
    }

    reverse(mas);

    for (auto el : mas) cout << el << " ";
}