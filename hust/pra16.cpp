//
// Created by muyou on 2024/9/5.
//
#include "iostream"
#include "algorithm"
#include "string"

using namespace std;

struct Student {
    string name;
    int grade;
    int age;

    Student(): name(""), grade(0), age(0) {}

    Student(string name, int g, int a) : name(name), grade(g), age(a) {}

    bool operator<(const Student& s)const{
        if (grade != s.grade) {
            return grade < s.grade;
        } else if (name != s.name) {
            return name < s.name;
        } else {
            return age < s.age;
        }
    }
};

const int MAXN = 1001;

Student s[MAXN];

//bool comp(Student a, Student b) {
//    if (a.grade != b.grade) {
//        return a.grade < b.grade;
//    } else if (a.name != b.name) {
//        return a.name < b.name;
//    } else {
//        return a.age < b.age;
//    }
//}

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            string name;
            int grade, age;
            cin >> name >> age >> grade;
            s[i] = Student(name, grade, age);
        }
        sort(s, s + n);
        for (int i = 0; i < n; ++i) {
            cout << s[i].name << " " << s[i].age << " " << s[i].grade << endl;
        }
    }
    return 0;
}