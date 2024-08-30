//
// Created by muyou on 2024/8/8.
//
#include "iostream"
#include "cstdio"
#include "algorithm"
#include "vector"

using namespace std;

bool comp(vector<double> x, vector<double> y) {
    return x[2] > y[2];
}

int main() {
    int m, n;
    while (scanf("%d%d", &m, &n)) {
        if (m == -1 && n == -1) {
            break;
        }
        vector<double> jf[n];
        for (int i = 0; i < n; ++i) {
            double j, f;
            cin >> j >> f;
            jf[i].push_back(j);
            jf[i].push_back(f);
            jf[i].push_back(j / f);
        }
        sort(jf, jf + n, comp);
        double sum = 0;
        for (int i = 0; i < n && m > 0; ++i) {
            if (m - jf[i][1] >= 0) {
                m -= jf[i][1];
                sum += jf[i][0];
            } else{
                sum = sum + (m / jf[i][1] * jf[i][0]);
                m = 0;
            }
        }
        printf("%.3f\n",sum);
    }
    return 0;
}