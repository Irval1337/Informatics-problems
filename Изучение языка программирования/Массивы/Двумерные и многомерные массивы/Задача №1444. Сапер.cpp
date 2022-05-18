#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, M, W;
    cin >> N >> M >> W;
    int field[32][32] = {};
    for (int i = 0; i < W; i++) {
        int inf[2];
        cin >> inf[0] >> inf[1];
        inf[0]--; inf[1]--;
        field[inf[0]][inf[1]] = 10;
        for (int y = inf[0] != 0 ? inf[0] - 1 : inf[0]; y <= (inf[0] != N - 1 ? inf[0] + 1 : inf[0]); y++) {
            for (int x = inf[1] != 0 ? inf[1] - 1 : inf[1]; x <= (inf[1] != M - 1 ? inf[1] + 1 : inf[1]); x++) {
                if (!(y == inf[0] && x == inf[1]))
                    field[y][x]++;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << (field[i][j] < 9 ? (char)(field[i][j] + '0') : '*') << " ";
        cout << endl;
    }
    system("pause");
}