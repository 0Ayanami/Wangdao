//
// Created by muyou on 2024/9/5.
//
#include "iostream"
#include "cstdio"

using namespace std;

int main() {
    int a, b, c, d;
    while (scanf("%d.%d.%d.%d", &a, &b, &c, &d)) {
        if ((a <= 255 && a >= 0) && (b <= 255 && b >= 0) && (c <= 255 && c >= 0) && (d <=255 && d >= 0))
            cout << "Yes!" << endl;
        else
            cout << "No!" << endl;
    }
    return 0;
}