#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <set>

using namespace std;

vector<int> min_ans;
int min_ans_size = 1e9;

void f(int N, vector<int>& coins, vector<int> ans, vector<bool> used) {
    if (N == 0) {
        if (ans.size() < min_ans_size) {
            min_ans_size = ans.size();
            min_ans = ans;
        }
        return;
    }

    
    int i = -1;
    for (auto coin : coins) {
        i++;
        if (N < coin) continue;
        if (used[i]) continue; 

        ans.push_back(coin);
        used[i] = true;
        f(N - coin, coins, ans, used);
        ans.push_back(coin);
        f(N - 2 * coin, coins, ans, used);
        ans.pop_back();
        ans.pop_back();
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> coins;
    long long _sum = 0;
    for (int i = 0; i < M; i++) {
        int num;
        cin >> num;
        coins.push_back(num);

        _sum += 2 * num;
    }

    if (_sum < N) {
        cout << -1;
        return 0;
    }

    auto used = vector<bool>(M, false);
    f(N, coins, vector<int>(0), used);

    if (min_ans_size == 1e9) cout << 0;
    else {
        cout << min_ans_size << endl;
        for (auto coin : min_ans) cout << coin << " ";
    }
}