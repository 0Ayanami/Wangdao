#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

const int MAXN = 1000001;

struct Student {
    string stuNo;
    string name;
    int grade;
    Student(){};
    Student(string no, string na, int g): stuNo(no), name(na), grade(g) {
    }
};

bool comp3(Student a, Student b) {
    if(a.grade != b.grade)
        return a.grade < b.grade;
    else
        return a.stuNo < b.stuNo;
}

bool comp1(Student a, Student b) {
    return a.stuNo < b.stuNo;
}

bool comp2(Student a, Student b) {
    if(a.name != b.name)
        return a.name < b.name;
    else
        return a.stuNo < b.stuNo;
}

int main() {
    int n, c;
    while (cin >> n >> c) {
        if (n == 0)
            break;
        vector<Student> stu;
        for (int i = 0; i < n; ++i) {
            string no, na;
            int g;
            cin >> no >> na >> g;
            Student s(no, na, g);
            stu.push_back(s);
        }
        if (c == 1)
            sort(stu.begin(), stu.end(), comp1);
        else if (c == 2)
            sort(stu.begin(), stu.end(), comp2);
        else if (c == 3)
            sort(stu.begin(), stu.end(), comp3);
        cout << "Case:" << endl;
        for (int i = 0; i < n; ++i)
            cout << stu[i].stuNo << " " << stu[i].name << " " << stu[i].grade << endl;
    }
    return 0;
}