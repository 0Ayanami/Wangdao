//
// Created by muyou on 2024/9/4.
//
#include "iostream"
#include "cstdio"

using namespace std;

int main() {
    int y, n;
    while (cin >> y >> n) {
        int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) {
            month[1] = 29;
        }
        for (int i = 0; i < 12; ++i) {
            if (n <= month[i]) {
                printf("%d-%02d-%02d\n", y, i + 1, n);
                break;
            } else {
                n -= month[i];
            }
        }
    }
    return 0;
}