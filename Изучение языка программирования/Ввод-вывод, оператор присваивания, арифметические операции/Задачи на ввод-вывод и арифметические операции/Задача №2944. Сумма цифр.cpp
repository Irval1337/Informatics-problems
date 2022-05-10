#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	long long a = 0;
	char c;
	while (cin >> c) {
		a += c - '0';
	}
	cout << a;
}