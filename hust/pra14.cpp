//
// Created by muyou on 2024/9/5.
//
#include "iostream"

using namespace std;

int main() {
    string s;
    while (cin >> s) {
        bool flag = true;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] != s[s.size() - i - 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "Yes!" << endl;
        } else {
            cout << "No!" << endl;
        }
    }
    return 0;
}