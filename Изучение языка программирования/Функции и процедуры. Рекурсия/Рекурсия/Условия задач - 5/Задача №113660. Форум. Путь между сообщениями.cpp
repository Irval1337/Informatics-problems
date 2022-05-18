#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

vector<bool> used;

void dfs(int v, vector<vector<int>>& graph) {
    used[v] = true;

    for (auto u : graph[v]) {
        if (!used[u])
            dfs(u, graph);
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


    used = vector<bool>(100001, false);
    int a, b;
    cin >> a >> b;
    dfs(a, graph);

    cout << (used[b] ? "YES" : "NO");
}