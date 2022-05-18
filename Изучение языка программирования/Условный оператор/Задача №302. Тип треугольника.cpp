#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    int a,b,c;
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0)
        {
            if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) 
                cout << "right" << endl;
            else if ((a * a > b * b + c * c) || (b * b > a * a + c * c) || (c * c > a * a + b * b)) 
                cout << "obtuse" << endl;
            else 
                cout << "acute" << endl;
        }
    else 
        cout << "impossible" << endl;
}