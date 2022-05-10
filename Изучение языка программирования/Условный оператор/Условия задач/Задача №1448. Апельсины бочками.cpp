#include <iostream>
#include <cstdlib>

using namespace std;

string bochki (int count)
{
    if (count % 100 >= 11 && count % 100 <= 20)
        return " bochek";
    else if (count % 10 == 1)
        return " bochka";
    else if (count % 10 >= 2 && count % 10 <= 4)
        return " bochki";
    else if (count % 10 >= 5 && count % 10 <= 9)
        return " bochek";
}

int main ()
{
    int k;
    cin >> k;
    cout << k << bochki (k) << endl;
    system ("pause");
}