#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N, zeros = 0, plus = 0, minus = 0;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;

        if (temp == 0)
            zeros++;
        else if (temp > 0)
            plus++;
        else
            minus++;
    }

    cout << zeros << " " << plus << " " << minus;

    return 0;
}