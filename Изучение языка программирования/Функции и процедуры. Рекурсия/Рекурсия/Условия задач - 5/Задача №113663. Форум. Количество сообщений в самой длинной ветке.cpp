#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

vector<bool> used;
int max_depth = -1;

void dfs(int v, vector<vector<int>>& graph, int depth) {
    max_depth = max(max_depth, depth);
    used[v] = true;

    long long count = 1;

    for (auto u : graph[v]) {
        if (!used[u])
            dfs(u, graph, depth + 1);
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
    dfs(0, graph, 0);
    cout << max_depth;
}