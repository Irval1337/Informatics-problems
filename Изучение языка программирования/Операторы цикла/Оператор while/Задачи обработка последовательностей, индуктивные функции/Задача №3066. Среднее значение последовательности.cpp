#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int count = 0, sum = 0, num;
    cin >> num;

    while (num != 0)
    {
        count++;
        sum += num;
        cin >> num;
    }

    cout << (double)sum / count;

    return 0;
}