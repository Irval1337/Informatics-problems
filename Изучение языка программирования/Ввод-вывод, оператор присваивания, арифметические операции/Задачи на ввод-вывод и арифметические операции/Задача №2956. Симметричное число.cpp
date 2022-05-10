#include <iostream>

using namespace std;

int main ()
{
    int num;
    cin >> num;
    int t = num / 1000;
    int h = num % 1000 / 100;
    cout << num - 1001*t - 110*h + 1 << endl;
    system ("pause");
}