#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, temp = 0, num = 0, _n1 = 0, _n2 = 0;
    cin >> N;
    
    while (num < N)
    {
        if (temp == 0)
            num = 1;
        else
            num = _n1 + _n2;
        _n2 = _n1;
        _n1 = num;
        
        temp++;
    }

    cout << (num != N ? -1 : temp);

    return 0;
}