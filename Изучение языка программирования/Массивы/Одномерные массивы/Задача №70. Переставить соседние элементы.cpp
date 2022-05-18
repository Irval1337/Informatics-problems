#include <iostream>

using namespace std;

int main()
{
    int k;
    cin >> k;
    int mas[35];
    for (int i = 0; i < k; i++) {
        cin >> mas[i];
        if (i % 2) {
            swap(mas[i], mas[i - 1]);
            cout << mas[i - 1] << " " << mas[i] << " ";
        }
        if (k % 2 && i == k - 1)
            cout << mas[i];
    }
}