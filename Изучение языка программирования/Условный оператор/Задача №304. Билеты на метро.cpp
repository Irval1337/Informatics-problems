#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    int n, k, n1, n2, n3;
    
    cin >> n;

    n3 = n/60;
    k = n%60;
    n2 = k/10;
    n1 = k%10;
    
    if (n1 == 9)
    {
        n2++;
        n1 = 0;
    }
    if (k >= 35)
    {
        n3++;
        n1 = 0;
        n2 = 0;
    }
    
    cout << n1 << " " << n2 << " " << n3;
}