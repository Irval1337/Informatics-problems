#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <deque>

using namespace std;

int getFirst(deque<int> A) {
    if (A.empty()) return 1e9;
    return A.front();
}

int was_on_A;
deque<int>* Ap = nullptr;

void move(int top, deque<int>& A, deque<int>& B, deque<int>& C, int a, int b, int c) {
    if (A.empty()) return;
    if (A.front() >= top) return;

    int tmp_val = A.back();
    A.pop_back();

    if (tmp_val < top && tmp_val < getFirst(C)) {
        move(top, A, C, B, a, c, b);
        cout << tmp_val << " " << a << " " << c << endl;
        C.push_front(tmp_val);
        move(top, B, A, C, b, a, c);
    }
    else {
        move(top, A, B, C, a, b, c);
        A.push_back(tmp_val);
    }
}

void hanoi(deque<int>& A, deque<int>& B, deque<int>& C, int& a, int& b, int& c) {
    if (Ap == nullptr) Ap = &A;

    if (A.empty()) {
        was_on_A = -1;
        while (!C.empty() && !B.empty()) {
            move(getFirst(C), B, A, C, b, a, c);
            swap(B, C);
            swap(b, c);
        }
        return;
    }

    int top = A.front();
    was_on_A = A.size();

    deque<int> tmp_A = A;
    A.clear();

    while (top > getFirst(C)) {
        move(getFirst(C), B, A, C, b, a, c);
        swap(B, C);
        swap(b, c);
    }
    cout << top << " " << a << " " << c << endl;

    A = tmp_A;

    C.push_front(top);
    A.pop_front();

    hanoi(A, B, C, a, b, c);
}

int main() {
    int n;
    cin >> n;
    vector<int> tmp_a;
    deque<int> A, B, C;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        tmp_a.push_back(num);
    }

    for (int i = n - 1; i >= 0; i--) A.push_front(tmp_a[i]);

    int a = 1, b = 2, c = 3;
    hanoi(A, B, C, a, b, c);
}