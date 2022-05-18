#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, num = 1, k = 0;
    cin >> N;
    bool is = false;
    
    while (num <= N)
    {
        if (num == N)
            break;
        num *= 2;
        k++;
    }

    cout << k;

    return 0;
}