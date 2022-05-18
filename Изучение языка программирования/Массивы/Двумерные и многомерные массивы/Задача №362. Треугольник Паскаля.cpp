#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int mas[100][100] = {};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (i == 0 ? m : 1); j++)
            mas[i][j] = 1;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mas[i][j] != 1)
                mas[i][j] = mas[i - 1][j] + mas[i][j - 1];
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
}