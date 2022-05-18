#include <iostream>

using namespace std;

int getNum3(int s, int de)
{
    int i;
    for (i = 0; i * 10 + s <= de && i <= 9; i++){}

    return i;
}

int getNum4(int t, int sde)
{
    int i;
    for (i = 0; i * 100 + i * 10 + t <= sde && i <= 9; i++){}

    return i;
}

int getNum5(int tt, int tsde)
{
    int i, j = 0, k = 0;
    for (i = 0; i * 1000 + j * 100 + i * 10 + tt <= tsde && i <= 9; i++)
        for (j = 0; i * 1000 + j * 100 + i * 10 + tt <= tsde && j <= 9 ; j++)
            k++;

    return k;
}

int main()
{
    int num = 0, k = 1;
    int n1 = 0, n2 = 0, n3 = 0;

    cin >> num;

    for (int i = 10; i <= num; i *= 10)
        k++;

    switch (k)
    {
        case 1:
            cout << num;
            break;
    case 2:
            cout << 9 + num / 11;
            break;
    case 3:
            n1 = num / 100, n2 = num % 100 / 10;
            cout << 18 + (n1 - 1) * 10 + getNum3(n1, num % 100);
            break;
    case 4:
            n1 = num / 1000, n2 = num % 1000 / 100;
            cout << 108 + (n1 - 1) * 10 + getNum4(n1, num % 1000);
            break;
    case 5:
            n1 = num / 10000, n2 = num % 10000 / 1000, n3 = num % 1000 / 100;
            cout << 198 + (n1 - 1) * 100 + getNum5(n1, num % 10000);
            break;
    case 6:
            cout << 1098;
            break;
    }

    return 0;
}