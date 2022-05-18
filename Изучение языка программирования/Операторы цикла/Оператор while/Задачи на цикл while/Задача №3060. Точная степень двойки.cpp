#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, num = 1;
    cin >> N;
    bool is = false;
    
    while (num <= N)
    {
        is = num == N;
        num *= 2;
    }

    cout << (is ? "YES" : "NO");

    return 0;
}