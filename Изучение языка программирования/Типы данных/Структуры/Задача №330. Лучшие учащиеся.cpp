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

    double getAverage() {
        return (double)(this->maths + this->physics + this->informatics) / 3;
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

    double max_av = 0;
    vector<Student*> students;

    for (int i = 0; i < n; i++) {
        if (points[i]->getAverage() > max_av) {
            max_av = points[i]->getAverage();
            students.clear();
            students.push_back(points[i]);
        }
        else if (points[i]->getAverage() == max_av) students.push_back(points[i]);
        else delete points[i];
    }

    for (int i = 0; i < students.size(); i++) {
        cout << students[i]->name << " " << students[i]->surname << endl;
        delete students[i];
    }
}