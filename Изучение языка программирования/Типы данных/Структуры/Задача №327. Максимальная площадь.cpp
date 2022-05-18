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

    double max_s = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (i == j || i == k || j == k) continue;
                double a = points[i]->dist(points[j]);
                double b = points[i]->dist(points[k]);
                double c = points[j]->dist(points[k]);
                double p = (a + b + c) / 2;

                max_s = max(max_s, sqrt(p * (p - a) * (p - b) * (p - c)));
            }
        }
    }

    for (int i = 0; i < n; i++) {
        delete points[i];
    }

    cout.precision(15);
    cout << max_s;
}