#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int max, num, count = 0;
    cin >> num;
    max = num;

    while (num != 0)
    {
        count += num == max;

        if (num > max) {
            max = num;
            count = 1;
        }
        cin >> num;
    }

    cout << count;

    return 0;
}