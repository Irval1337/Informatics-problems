#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

struct Student {
    string name, surname;
    int maths, physics, informatics, id;

    Student(string name, string surname, int maths, int physics, int informatics, int id) {
        this->name = name;
        this->surname = surname;
        this->maths = maths;
        this->physics = physics;
        this->informatics = informatics;
        this->id = id;
    }

    void edit(Student* s) {
        this->name = s->name;
        this->surname = s->surname;
        this->maths = s->maths;
        this->physics = s->physics;
        this->informatics = s->informatics;
    }

    double getAverage() {
        return (double)(this->maths + this->physics + this->informatics) / 3;
    }
};

bool comp(Student* s1, Student* s2) {
    return s1->getAverage() > s2->getAverage() || s1->getAverage() == s2->getAverage() && s1->id < s2->id;
}

int main() {
    int n;
    cin >> n;

    vector<Student*> points;

    for (int i = 0; i < n; i++) {
        string name, surname;
        int maths, physics, informatics;
        cin >> name >> surname >> maths >> physics >> informatics;

        points.push_back(new Student(name, surname, maths, physics, informatics, i));
    }

    sort(points.begin(), points.end(), comp);
    for (int i = 0; i < n; i++) {
        cout << points[i]->name << " " << points[i]->surname << endl;
    }
}