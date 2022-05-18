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

Point* zero;

bool comp(Point* p1, Point* p2) {

    return p1->dist(zero) < p2->dist(zero);
}

int main() {
    int n;
    cin >> n;

    vector<Point*> points;
    zero = new Point(0, 0);

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        Point* p = new Point(x, y);
        points.push_back(p);
    }

    sort(points.begin(), points.end(), comp);

    delete zero;

    for (int i = 0; i < n; i++) {
        cout << points[i]->x << " " << points[i]->y << endl;
        delete points[i];
    }
}