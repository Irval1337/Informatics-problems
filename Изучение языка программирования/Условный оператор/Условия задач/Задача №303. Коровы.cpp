#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

string korovy(int count)
{
    if (count%100 >= 11 && count%100 <= 20)
        return to_string(count) + " korov";
    else if (count%10 == 1)
        return to_string(count) + " korova";
    else if (count%10 >= 2 && count%10 <= 4)
        return to_string(count) + " korovy";
    else if (count%10 >= 5 && count%10 <= 9)
        return to_string(count) + " korov";
}

int main ()
{
    int k;
    cin >> k;
    cout << korovy(k) << endl;
}