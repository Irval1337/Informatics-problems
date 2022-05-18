#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

vector<bool> used;

vector<int> get_parent(int v, vector<int>& parent) {
    if (v == 0) return { 0 };
    auto prev = get_parent(parent[v], parent);
    prev.push_back(v);
    return prev;
}

int main() {
    int N;
    cin >> N;
    vector<int> parent(100001);

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;

        parent[a] = b;
    }

    int num;
    cin >> num;
    auto mas = get_parent(num, parent);
    for (int i = 0; i < mas.size() - 1; i++) cout << mas[i] << "#";
    cout << mas[mas.size() - 1];
}