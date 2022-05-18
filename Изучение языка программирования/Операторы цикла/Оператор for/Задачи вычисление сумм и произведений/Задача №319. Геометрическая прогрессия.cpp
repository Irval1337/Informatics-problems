#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    double a, n;
    cin >> a >> n;
    double sum = 1, an = 1;

    for (int i = 1; i <= n; i++)
    {
        an *= a;
        sum += an;
    }
    printf("%0.8f", sum);
}