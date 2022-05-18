#include <iostream>
#include <cstdlib>

using namespace std;

int Num (int a)
{
    if (a != 1)
        return (a - 1) * 4;
    else
        return 1;
}

int main ()
{
    int k;
    cin >> k;
    if (k == 1)
        cout << "YES" << endl;
    else if (Num (k / 4 + 1) == k)
        cout << "YES";
    else
        cout << "NO";
    system ("pause");
}