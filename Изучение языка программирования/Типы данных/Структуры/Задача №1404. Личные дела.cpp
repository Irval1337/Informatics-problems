#include <iostream>
#include <vector> 
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

struct Student {
    string name, surname;
    int class_num, class_letter;
    string birth_date;

    Student(string name, string surname, int class_num, int class_letter, string birth_date) {
        this->name = name;
        this->surname = surname;
        this->class_num = class_num;
        this->class_letter = class_letter;
        this->birth_date = birth_date;
    }
};

bool comp(Student* s1, Student* s2) {
    if (s1->class_num == s2->class_num) {
        if (s1->class_letter == s2->class_letter)
            return lexicographical_compare(s1->surname.begin(), s1->surname.end(), s2->surname.begin(), s2->surname.end());
        else return s1->class_letter < s2->class_letter;
    }
    else return s1->class_num < s2->class_num;
}

int main() {
    int n;
    cin >> n;

    vector<Student*> points;

    for (int i = 0; i < n; i++) {
        string name, surname, birth_date, class_s;
        int class_num, class_letter;
        cin >> surname >> name >> class_s >> birth_date;

        class_letter = class_s[class_s.size() - 1] - 'A';
        class_num = atoi(class_s.substr(0, class_s.size() - 1).c_str());

        points.push_back(new Student(name, surname, class_num, class_letter, birth_date));
    }

    sort(points.begin(), points.end(), comp);
    for (int i = 0; i < n; i++) {
        cout << points[i]->class_num << (char)(points[i]->class_letter + 'A') << " " << points[i]->surname << " " << points[i]->name << " " << points[i]->birth_date << endl;
    }
}