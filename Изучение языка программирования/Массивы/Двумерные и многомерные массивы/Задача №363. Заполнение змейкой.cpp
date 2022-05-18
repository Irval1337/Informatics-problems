#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int last = -1;
    int mas[100][100] = {};
    for (int i = 0; i < n; i++) {
        if (i % 2)
            for (int j = m - 1; j >= 0; j--)
                mas[i][j] = ++last;
        else
            for (int j = 0; j < m; j++)
                mas[i][j] = ++last;
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << mas[i][j] << " ";
        cout << endl;
    }
}