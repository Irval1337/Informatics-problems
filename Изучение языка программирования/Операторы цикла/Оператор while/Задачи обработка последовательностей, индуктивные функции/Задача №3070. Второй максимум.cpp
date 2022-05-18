#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int max, _max = 0, num;
    cin >> num;
    max = num;

    while (num != 0)
    {
        cin >> num;

        if (num > max)
        {
            _max = max;
            max = num;
        }
        else if (num > _max)
            _max = num;
    }

    cout << _max;

    return 0;
}