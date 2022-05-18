#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	long long a, b, n;
	cin >> a >> b >> n;
	long long p = (b + a * 100) * n;
	cout << p / 100 << " " << p % 100;
}