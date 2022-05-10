#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	long long a = 0;
	cin >> a;
	a %= 3600 * 24;
	long long h = a / 3600, m = (a % 3600) / 60, s = a % 60;
	cout << h << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10;
}