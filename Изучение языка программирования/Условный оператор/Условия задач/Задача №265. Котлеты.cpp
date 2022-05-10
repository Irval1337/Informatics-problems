#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    int k, m, n;
    cin >> k >> m >> n;
    if (k >= n)
        cout << 2*m << endl;
    else if (n*2 % k==0)
        cout << m*(n*2 / k) << endl;
    else
    cout << m*(1+(n*2 / k)) << endl;
}