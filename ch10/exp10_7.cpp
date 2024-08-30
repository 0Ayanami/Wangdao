//
// Created by muyou on 2024/8/16.
//
#include "iostream"
#include "map"
#include "string"

using namespace std;

struct Student {
    string name;
    string sex;
    int age;

    Student() : name(""), sex(""), age(0) {}

    Student(string n, string s, int a) : name(n), sex(s), age(a) {}
};

int main() {
    int n;
    cin >> n;
    map<string, Student> myMap;
    for (int i = 0; i < n; ++i) {
        string num, name, sex;
        int age;
        cin >> num >> name >> sex >> age;
        myMap[num] = Student(name, sex, age);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        string num;
        cin >> num;
        if (myMap.find(num) == myMap.end()) {
            cout << "No Answer!" << endl;
        } else {
            cout << num << " " << myMap[num].name << " "
                 << myMap[num].sex << " " << myMap[num].age << endl;
        }
    }
    return 0;
}
