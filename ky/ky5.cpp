//
// Created by muyou on 2024/9/10.
//
#include "iostream"
#include "string"

using namespace std;

int main() {
    string a;
    while (cin >> a) {
        for (auto i = a.end() - 1; i >= a.begin(); --i) {
            cout << *i;
        }
        cout << endl;
    }
    return 0;
}