#include <iostream>

using namespace std;

int main ()
{
    int n, m;
    cin >> n >> m;
    cout << (n%m)*(m%n)+1 << endl;
    system ("pause");
}