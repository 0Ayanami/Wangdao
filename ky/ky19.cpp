//
// Created by muyou on 2024/9/12.
//
#include "iostream"

using namespace std;

int main() {
    int year, month, day;
    while (cin >> year >> month >> day) {
        int sum = 0;
        int monthdays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
            monthdays[2] += 1;
        }
        for (int i = 1; i < month; ++i) {
            sum += monthdays[i];
        }
        sum += day;
        cout << sum << endl;
    }
    return 0;
}