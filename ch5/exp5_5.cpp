//
// Created by muyou on 2024/7/29.
//
#include "iostream"
#include "stack"
#include "string.h"
using namespace std;

int main(){
    string text;
    cin >> text;
    stack<char> left;
    char illegal[text.size()];
    memset(illegal, ' ', text.size());
    for (int i = 0; i < text.size(); ++i) {
        if(text[i] == '('){
            left.push(i);
        } else if (text[i] == ')'){
            if(!left.empty()){
                left.pop();
            } else{
                illegal[i] = '?';
            }
        }
    }
    while (!left.empty()){
        illegal[left.top()] = '$';
        left.pop();
    }
    cout << text << endl;
    cout << illegal;
    return 0;
}