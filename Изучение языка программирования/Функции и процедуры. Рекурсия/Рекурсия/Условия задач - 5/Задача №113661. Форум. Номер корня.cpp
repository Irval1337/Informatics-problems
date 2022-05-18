#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

vector<bool> used;

int get_parent(int v, vector<int>& parent) {
    if (parent[v] == 0) return v;
    return get_parent(parent[v], parent);
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
    cout << get_parent(num, parent);
}