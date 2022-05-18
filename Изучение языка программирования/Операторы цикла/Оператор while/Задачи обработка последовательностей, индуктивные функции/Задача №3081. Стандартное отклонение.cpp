#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long double num, sum = 0, kol = 0;
    long double temp = 0, s = 0;
    cin >> num;

    while (num != 0)
    {
        sum += num;
        temp += num * num;
        kol++;
        cin >> num;
    }
    s = sum / kol;

    if (kol == 1)
        cout << 0;
    else
        cout << sqrt((temp - 2 * s * sum + kol * s * s) / (kol - 1));
    

    return 0;
}