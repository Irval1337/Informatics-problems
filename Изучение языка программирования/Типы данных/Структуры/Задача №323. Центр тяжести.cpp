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

    vector<Point*> points;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        Point* p = new Point(x, y);
        points.push_back(p);
    }

    long long sum_x = 0, sum_y = 0;

    for (int i = 0; i < n; i++) {
        sum_x += points[i]->x;
        sum_y += points[i]->y;
        delete points[i];
    }

    cout << (double)sum_x / n << " " << (double)sum_y / n;
}