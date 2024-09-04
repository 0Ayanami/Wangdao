//
// Created by muyou on 2024/9/4.
//
#include "iostream"
#include "queue"
#include "string"

using namespace std;

struct Staff {
    int number;
    string name;
    int age;

    Staff(int n, string s, int a) : number(n), name(s), age(a) {}

    bool operator<(const Staff &s) const {
        if(age != s.age)
            return age > s.age;
        else if(number != s.number)
            return number > s.number;
        else
            return name > s.name;
    }
};

int main() {
    int n;
    while (cin >> n) {
        priority_queue<Staff> myQueue;
        for (int i = 0; i < n; ++i) {
            int num, age;
            string name;
            cin >> num >> name >> age;
            myQueue.push(Staff(num, name, age));
        }
        for (int i = 0; i < 3; ++i) {
            Staff m = myQueue.top();
            myQueue.pop();
            cout << m.number << " " << m.name << " " << m.age << endl;
        }
    }
    return 0;
}