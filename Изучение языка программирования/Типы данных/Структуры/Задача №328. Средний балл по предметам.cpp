#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

struct Student {
    string name, surname;
    int maths, physics, informatics;

    Student(string name, string surname, int maths, int physics, int informatics) {
        this->name = name;
        this->surname = surname;
        this->maths = maths;
        this->physics = physics;
        this->informatics = informatics;
    }
};

int main() {
    int n;
    cin >> n;

    vector<Student*> points;

    for (int i = 0; i < n; i++) {
        string name, surname;
        int maths, physics, informatics;
        cin >> name >> surname >> maths >> physics >> informatics;

        points.push_back(new Student(name, surname, maths, physics, informatics));
    }

    long long sum_maths = 0, sum_physics = 0, sum_informatics = 0;

    for (int i = 0; i < n; i++) {
        sum_maths += points[i]->maths;
        sum_physics += points[i]->physics;
        sum_informatics += points[i]->informatics;

        delete points[i];
    }

    cout.precision(15);
    cout << (double)sum_maths / n << " " << (double)sum_physics / n << " " << (double)sum_informatics / n;
}