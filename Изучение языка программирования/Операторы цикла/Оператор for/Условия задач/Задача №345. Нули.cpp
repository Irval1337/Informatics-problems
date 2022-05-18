#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    long long N;
    cin >> N;
    long long count = 0;
    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        count += num == 0;
    }

    cout << count;
}