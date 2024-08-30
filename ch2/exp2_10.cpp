//
// Created by muyou on 2024/7/15.
//
#include "iostream"

using namespace std;

int daytab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

bool isLeapYear(int year) {
    if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
        return true;
    return false;
}

int main() {
    int m, n, k;
    while (cin >> m >> n) {
        int month, day;
        k = isLeapYear(m);
        for (int i = 0, j = n; i < 12; ++i) {
            if (j <= daytab[k][i]) {
                month = i + 1;
                day = j;
                break;
            }
            j -= daytab[k][i];
        }
        cout << m << "-" << month << "-" << day << endl;
    }
    return 0;
}