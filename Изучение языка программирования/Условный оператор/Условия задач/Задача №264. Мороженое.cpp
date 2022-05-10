#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    int k;
    cin >> k;
    if (k % 8 == 0 || k % 5 == 0 || k % 3 == 0 || k % 8 % 3 == 0 || k % 8 % 5 == 0 || k > 8)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    system ("pause");
}