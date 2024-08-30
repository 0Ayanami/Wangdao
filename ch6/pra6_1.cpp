//
// Created by muyou on 2024/8/2.
//
#include "iostream"
#include "stack"

using namespace std;

int main(){
    int m;
    while(cin >> m){
        stack<int> answer;
        while(m > 0){
            answer.push(m % 8);
            m /= 8;
        }
        if(answer.empty()){
            answer.push(0);
        }
        while (!answer.empty()){
            cout << answer.top();
            answer.pop();
        }
        cout << endl;
    }
    return 0;
}