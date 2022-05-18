#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	long long a;
	cin >> a;
	long long t = 45 * a + (a - 1) / 2 * 20 + (a - 1) % 2 * 5;
	t += 9 * 60;
	cout << t / 60 << " " << t % 60;
}