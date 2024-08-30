//
// Created by muyou on 2024/7/29.
//
#include "iostream"
#include "stack"

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<long long> numbers;
    for (int i = 0; i < n; ++i) {
        long long temp;
        cin >> temp;
        numbers.push(temp);
    }
    cout << numbers.top();
    numbers.pop();
    while(!numbers.empty()){
        cout << " " << numbers.top();
        numbers.pop();
    }
    return 0;
}