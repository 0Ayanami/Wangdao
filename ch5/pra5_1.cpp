//
// Created by muyou on 2024/7/29.
//
#include "stack"
#include "iostream"
#include "cstdio"

using namespace std;

int main(){
    int n;
    while(cin >> n){
        stack<int> oper;
        for (int i = 0; i < n; ++i) {
            char op;
            int num;
            cin >> op;
            if(op == 'A'){
                if(!oper.empty()){
                    cout << oper.top() << endl;
                } else
                    cout << "E" << endl;
            } else if(op == 'P'){
                cin >> num;
                oper.push(num);
            }else if(op == 'O'){
                if(!oper.empty())
                    oper.pop();
            }
        }
    }
    return 0;
}