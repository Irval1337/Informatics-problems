#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    double x, y, z;
    cin >> x >> y >> z;

    int N;
    cin >> N;

    double X_sum = 0, Y_sum = 0, Z_sum = 0;

    for (int i = 0; i < N; i++) {
        double A, B, C, Q;
        cin >> A >> B >> C >> Q;

        X_sum += A * Q, Y_sum += B * Q, Z_sum += C * Q;
    }

    if ((X_sum >= x || abs(X_sum - x) < 1e-5) && (Y_sum >= y || abs(Y_sum - y) < 1e-5) && (Z_sum >= z || abs(Z_sum - z) < 1e-5))
        cout << "YES";
    else cout << "NO";
}