#include <iostream>

using namespace std;

int main ()
{
    int min;
    cin >> min;
    min = min % (60 * 24);
    cout << min/60 << " " << min % 60 << endl;
}