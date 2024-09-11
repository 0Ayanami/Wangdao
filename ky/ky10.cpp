//
// Created by muyou on 2024/9/10.
//
#include "iostream"
#include "cstdio"
#include "math.h"

using namespace std;

int main() {
    double x, y, z;
    double a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    double r = pow(pow(abs(a - x), 2) + pow(abs(b - y), 2) + pow(abs(c - z), 2), 0.5);
    double v = pow(r, 3) * acos(-1) * 4 /3;
    printf("%.3f %.3f",r,v);
    return 0;
}