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

    double dist(Point* p) {
        return sqrt(pow(this->x - p->x, 2) + pow(this->y - p->y, 2));
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

    double max_dist = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            max_dist = max(max_dist, points[i]->dist(points[j]));
    }

    for (int i = 0; i < n; i++) {
        delete points[i];
    }

    cout.precision(15);
    cout << max_dist;
}