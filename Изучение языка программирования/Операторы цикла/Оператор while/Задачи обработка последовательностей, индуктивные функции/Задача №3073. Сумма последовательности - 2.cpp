#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, sum = 0;
    cin >> num;
    if (num == 0)
        cin >> num;

    while (num != 0)
    {
        sum += num;
        cin >> num;

        if (num == 0)
            cin >> num;
    }

    cout << sum;

    return 0;
}