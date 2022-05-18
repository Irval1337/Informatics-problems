#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <set>

using namespace std;

vector<int> ans;

void f(long long N, vector<int> nums) {
    if (ans.size() > 0) return;

    if (N == 0) {
        ans = nums;
        return;
    }

    if (nums.size() == 8) return;

    for (int i = nums.size() == 0 ? 1260 : nums[nums.size() - 1]; i >= 1; i--) {
        if ((8 - nums.size()) * i * i * i < N) break;

        nums.push_back(i);
        f(N - i * i * i, nums);
        nums.pop_back();
    }
}

int main() {
    long long N;
    cin >> N;

    f(N, vector<int>(0));
    if (ans.size() == 0) cout << "IMPOSSIBLE";
    else {
        for (auto el : ans) cout << el << " ";
    }
}