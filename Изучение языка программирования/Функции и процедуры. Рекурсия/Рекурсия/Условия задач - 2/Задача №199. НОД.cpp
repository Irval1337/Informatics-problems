#include <iostream>
using namespace std;
int nod(int a, int b) {
    return b == 0 ? a : nod(b, a % b);
}
int main(){
    int a, b;
    cin >> a >> b;
    cout << nod(a, b) << endl;
}