//
// Created by muyou on 2024/8/2.
//
#include "iostream"
#include "stack"

using namespace std;

char IntToChar(int n) {
    if (n < 10) {
        return n + '0';
    } else {
        return n - 10 + 'a';
    }
}

int main() {
    int m;
    while (cin >> m) {
        if (m == 0)
            break;
        long long a, b;
        cin >> a >> b;
        long long num = a + b;
        stack<char> answer;
        while(num > 0){
            answer.push(IntToChar(num % m));
            num /= m;
        }
        if (answer.empty())
            answer.push('0');
        while(!answer.empty()){
            cout << answer.top();
            answer.pop();
        }
        cout << endl;
    }
    return 0;
}