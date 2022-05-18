#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int mas[201][201] = {}, last = pow(2 * n + 1, 2) - 1, k = 0;
    int status = 0;
    while (last) {
        switch (status) {
        case 0:
            for (int i = k / 4; i <= 2 * n - k / 4; i++)
                mas[i][2 * n - k / 4] = last--;
            break;
        case 1:
            for (int j = 2 * n - k / 4 - 1; j >= k / 4; j--)
                mas[2 * n - k / 4][j] = last--;
            break;
        case 2:
            for (int i = 2 * n - k / 4 - 1; i >= k / 4; i--)
                mas[i][k / 4] = last--;
            break;
        case 3:
            for (int j = k / 4 + 1; j <= 2 * n - k / 4 - 1; j++)
                mas[k / 4][j] = last--;
            break;
        }
        k++;
        if (++status > 3)
            status = 0;
    }

    for (int i = 0; i < n * 2 + 1; i++) {
        for (int j = 0; j < n * 2 + 1; j++)
            cout << setw(3) << mas[i][j] << " ";
        cout << endl;
    }
}