//
// Created by muyou on 2024/9/4.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    string A, B;
    while (cin >> A >> B) {
        long long a = 0;
        long long b = 0;
        for(int i = 0; i < A.size(); i++) {
            if (A[i] == ',' || A[i] == '-') {
                continue;
            }
            a = a * 10 + (A[i] - '0');
        }
        if (A[0] == '-') {
            a = -a;
        }
        for(int j = 0; j < B.size(); j++) {
            if (B[j] == ',' || B[j] == '-') {
                continue;
            }
            b = b * 10 + (B[j] - '0');
        }
        if (B[0] == '-') {
            b = -b;
        }
        long long c = a + b;
        cout << c << endl;
    }
    return 0;
}