#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, num = 1;
    cin >> N;
    
    while (num <= N)
    {
        cout << num << " ";
        num *= 2;
    }

    return 0;
}