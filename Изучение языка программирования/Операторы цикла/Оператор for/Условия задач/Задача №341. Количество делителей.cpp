#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x;
    cin >> x;
    int num = 0;

    for (int i = 1; i <= sqrt(x) - 1; i++)
    {
        num += x % i == 0;
    }

    cout << num*2 + (sqrt(x) == floor(sqrt(x)));

    return 0;
}