//
// Created by muyou on 2024/8/2.
//
#include "iostream"

using namespace std;

int CharToInt(char c) {
    if (c >= '0' && c <= '9')
        return c - '0';
    else if (c >= 'A' && c <= 'Z')
        return c - 'A' + 10;
    return -1;
}

int main() {
    string num;
    while (cin >> num){
        int answer = 0, p = 1;
        for (int i = num.size() - 1; i > 1; --i) {
            answer = answer + CharToInt(num[i]) * p;
            p = 16 * p;
        }
        cout << answer << endl;
    }
    return 0;
}