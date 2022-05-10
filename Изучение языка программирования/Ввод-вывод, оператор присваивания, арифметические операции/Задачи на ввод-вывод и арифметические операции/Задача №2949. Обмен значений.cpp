#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	long long a, b;
	cin >> a >> b;
	long long c = a;
	a = b;
	b = c;
	cout << a << " " << b;
}