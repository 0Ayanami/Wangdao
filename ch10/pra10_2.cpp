//
// Created by muyou on 2024/8/16.
//
#include "iostream"
#include "queue"

using namespace std;

int main(){
    int n,k;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> num;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        num.push(temp);
    }
    cin >> k;
    int temp = -1;
    do {
        if(temp != num.top()){
            temp = num.top();
            k--;
        }
        num.pop();
    }while(k>0);
    cout << temp;
    return 0;
}