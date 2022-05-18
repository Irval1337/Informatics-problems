#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <string>
#include <set>

using namespace std;

int main() {
    long long N;
    cin >> N;

    long long del = 2;
    if (N == 2) {
        cout << 2;
        return 0;
    }

    while (del <= sqrt(N)) {
        if (N % del == 0) {
            cout << del;
            return 0;
        }
        del++;
    }

    if (N % del == 0)
        cout << del;
    else cout << N;
}