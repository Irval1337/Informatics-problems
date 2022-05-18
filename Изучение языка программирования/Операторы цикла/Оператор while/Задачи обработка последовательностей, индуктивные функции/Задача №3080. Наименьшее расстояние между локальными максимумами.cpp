#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, last = 0, next = 0, count = 0;
    int min = 0, now = 0, pos = 2, prev = 0;
    bool first = true;

    cin >> last;
    if (last != 0)
    {
        cin >> num;
        if (num != 0)
        {
            cin >> next;
            if (next != 0)
            {
                while (next != 0)
                {
                    if ((last < num) && (num > next))
                    {
                        if (prev != 0)
                        {
                            now = pos - prev;
                            if (min == 0)
                                min = now;
                            else
                                min = now < min ? now : min;
                        }
                        prev = pos;
                    }
                    last = num;
                    num = next;
                    cin >> next;

                    pos++;
                }
            }
        }
    }
    
    cout << (min == 2048 ? 0 : min);

    return 0;
}