#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	long long n, m;
	cin >> n >> m;
	cout << (n - m % n) % n;
}