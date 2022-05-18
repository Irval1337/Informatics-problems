#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int max, num;
    cin >> num;
    max = num;

    while (num != 0)
    {
        if (num > max)
            max = num;
        cin >> num;
    }

    cout << max;

    return 0;
}