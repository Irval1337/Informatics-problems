#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

vector<bool> used;

void dfs(int v, vector<vector<int>>& graph, int depth) {
    if (v != 0)
        cout << string(depth, '*') << v << endl;
    used[v] = true;

    for (auto u : graph[v]) {
        if (!used[u])
            dfs(u, graph, depth + 2);
    }
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> graph(100001);

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;

        graph[b].push_back(a);
    }

    for (int i = 0; i < N; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    used = vector<bool>(100001, false);
    dfs(0, graph, -2);
}