#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

struct Point {
    int x, y;

    Point(int x, int y) {
        this->x = x;
        this->y = y;
    };

    double dist() {
        return sqrt((double)x * x + (double)y * y);
    }
};

int main() {
    int n;
    cin >> n;

    Point* max_p = new Point(0, 0);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        Point* p = new Point(x, y);
        if (p->dist() > max_p->dist())
            max_p = p;
        else
            delete p;
    }

    cout << max_p->x << " " << max_p->y;
}