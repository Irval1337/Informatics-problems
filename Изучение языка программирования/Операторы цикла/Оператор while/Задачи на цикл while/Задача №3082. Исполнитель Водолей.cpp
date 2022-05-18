#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    int aV = 0, bV = 0;
    char aC = 'A', bC = 'B';

    if (b < a) {
        swap(a, b);
        swap(aC, bC);
    }

    bool isOk = false;

    for (int i = 0; i <= 1e5; i++) {
        if (a <= b - bV)
            bV += a;
        else
            bV = a - (b - bV);
        if (bV == n)
        {
            isOk = true;
            break;
        }
    }

    if (!isOk) {
        cout << "Impossible";
        return 0;
    }

    bV = 0;
    while (true) {
        cout << ">" << aC << endl;
        cout << aC << ">" << bC << endl;
        if (a <= b - bV)
            bV += a;
        else {
            bV = a - (b - bV);
            cout << bC << ">" << endl;
            cout << aC << ">" << bC << endl;
        }
        if (bV == n)
            break;
    }
}