#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, last = 0, min = 0, max = 0;
    int dif = 0, last_dif = 0;
    int _max = 0, _min = 0;

    cin >> num;

    while (num != 0)
    {
        dif = num - last;

        if (last_dif >= 0 && dif > 0)
            _max++;
        else if (last_dif <= 0 && dif < 0)
            _min++;
        else
        {
            if (last_dif > 0)
            {
                if (_max > max)
                    max = _max;
                if (dif != 0)
                {
                    _max = 0;
                    _min = 2;
                }
                else {
                    _max = 1;
                    _min = 0;
                }
            }
            else
            {
                if (_min > min)
                    min = _min;
                if (dif != 0)
                {
                    _min = 0;
                    _max = 2;
                }
                else {
                    _max = 1;
                    _min = 0;
                }
            }
        }

        last = num;
        last_dif = dif;
        cin >> num;
    }
    
    max = (_max > max ? _max : max);
    min = (_min > min ? _min : min);

    cout << (max >= min ? max : min);

    return 0;
}