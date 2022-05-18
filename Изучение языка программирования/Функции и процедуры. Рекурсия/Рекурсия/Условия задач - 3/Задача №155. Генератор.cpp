#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

vector<vector<int>> generator(int n, int k) {
    if (n == 0) return vector<vector<int>>(1, vector<int>());

    vector<vector<int>> ans;
    for (int i = 1; i <= k; i++) {
        auto variants = generator(n - 1, k);
        for (auto var : variants) {
            vector<int> tmp = { i };
            for (auto el : var) tmp.push_back(el);
            ans.push_back(tmp);
        }
    }

    return ans;
}

int main() {
    int N, K;
    cin >> N >> K;

    auto res = generator(N, K);
    for (auto var : res) {
        for (auto el : var) cout << el << " ";
        cout << endl;
    }
}