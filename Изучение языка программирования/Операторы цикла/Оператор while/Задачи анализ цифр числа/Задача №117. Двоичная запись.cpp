#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    while (num)
    {
        cout << num % 2;
        num = num / 2;
    }

    return 0;
}