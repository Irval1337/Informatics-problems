#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if (a == 0 && b == 0)
        cout << "INF" << endl;
    else if (a == 0 || b * c == a * d)
        cout << "NO" << endl;
    else if (b % a == 0)
        cout << -b/a << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}