#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        auto temp = sqrt(i);
        if (temp == floor(temp))
            cout << i << " ";
    }

    return 0;
}