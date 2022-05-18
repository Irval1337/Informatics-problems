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

bool comp(Student s1, Student s2) {
    return s1.id < s2.id;
}

int main() {
    int n;
    cin >> n;

    vector<Student*> points;

    Student* null_student = new Student("", "", 0, 0, 0, 1e9);

    for (int i = 0; i < n; i++) {
        string name, surname;
        int maths, physics, informatics;
        cin >> name >> surname >> maths >> physics >> informatics;

        points.push_back(new Student(name, surname, maths, physics, informatics, i));
    }

    vector<Student> ans;
    while (ans.size() < 3) {
        double max_av = 0;
        vector<Student*> students;

        for (int i = 0; i < n; i++) {
            if (points[i]->getAverage() > max_av) {
                max_av = points[i]->getAverage();
                students.clear();
                students.push_back(points[i]);
            }
            else if (points[i]->getAverage() == max_av) students.push_back(points[i]);
        }

        for (int i = 0; i < students.size(); i++) {
            ans.push_back(*students[i]);
            students[i]->edit(null_student);
        }
    }

    sort(ans.begin(), ans.end(), comp);
    for (auto s : ans) cout << s.name << " " << s.surname << endl;
}