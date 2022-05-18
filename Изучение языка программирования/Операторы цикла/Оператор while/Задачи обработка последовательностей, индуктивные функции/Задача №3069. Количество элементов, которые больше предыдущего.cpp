#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int last = -1, num, count = 0;
    cin >> num;

    while (num != 0)
    {
        if (last != -1 && num > last)
            count++;
        last = num;
        cin >> num;
    }

    cout << count;

    return 0;
}