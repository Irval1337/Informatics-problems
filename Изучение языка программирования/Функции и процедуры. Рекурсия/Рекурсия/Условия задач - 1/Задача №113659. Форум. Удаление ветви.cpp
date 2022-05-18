#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

vector<bool> used;

long long del(int v, vector<vector<int>>& graph) {
    used[v] = true;

    long long count = 1;

    for (auto u : graph[v]) {
        if (!used[u])
            count += del(u, graph);
    }

    return count;
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> graph(10001);

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;

        graph[b].push_back(a);
    }


    used = vector<bool>(10001, false);
    int del_v;
    cin >> del_v;
    cout << del(del_v, graph);
}