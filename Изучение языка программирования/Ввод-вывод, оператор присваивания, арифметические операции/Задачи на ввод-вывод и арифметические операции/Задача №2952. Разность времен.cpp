#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	long long h1, m1, s1, h2, m2, s2;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	long long total1 = s1 + m1 * 60 + h1 * 3600,
	total2 = s2 + m2 * 60 + h2 * 3600;
	cout << total2 - total1;
}