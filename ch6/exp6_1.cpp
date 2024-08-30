//
// Created by muyou on 2024/7/31.
//
#include "iostream"
#include "stack"

using namespace std;

int main() {
    int num;
    while (cin >> num) {
        stack<int> binary;
        if (num == 0)
            cout << num << endl;
        else {
            while (num > 0) {
                binary.push(num % 2);
                num /= 2;
            }
            while (!binary.empty()) {
                cout << binary.top();
                binary.pop();
            }
            cout << endl;
        }
    }
    return 0;
}