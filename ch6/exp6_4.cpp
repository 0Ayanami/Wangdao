//
// Created by muyou on 2024/8/2.
//
#include "iostream"
#include "cstdio"
#include "string"
#include "vector"

using namespace std;

char IntToChar(int y) {
    if (y < 10) {
        return y + '0';
    } else {
        return y + 'a' - 10;
    }
}

int CharToInt(char y) {
    if (y >= '0' && y <= '9') {
        return y - '0';
    } else if (y >= 'A' && y <= 'Z') {
        return y - 'A' + 10;
    }
}

int main() {
    int m, n;
    scanf("%d%d", &m, &n);
    string x;
    cin >> x;
    long long number = 0, p =1;
    for (int i = 0; i < x.size(); ++i) {
        number = number * m * p;
        number += CharToInt(x[i]) * p;
    }
    vector<char> answer;
    while (number != 0) {
        answer.push_back(IntToChar(number % n));
        number /= n;
    }
    for (int i = answer.size()-1; i >= 0; --i) {
        cout << answer[i];
    }
    return 0;
}