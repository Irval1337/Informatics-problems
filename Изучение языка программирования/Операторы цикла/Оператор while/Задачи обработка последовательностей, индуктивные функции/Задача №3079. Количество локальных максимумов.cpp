#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, last = 0, next = 0, count = 0;
    bool isOk = false;

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
                    if ((num > last) && (num > next))
                        count++;
                    last = num;
                    num = next;
                    cin >> next;
                }
            }
        }
    }
    
    cout << count;

    return 0;
}