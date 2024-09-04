//
// Created by muyou on 2024/9/4.
//
#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;
    int m = n * n;
    int sum = 0;
    bool flag = false;
    for (int i = 1; m > 0; i*=10, m /= 10) {
        sum += (m % 10) * i;
        if(sum == n){
            cout << "Yes!" << endl;
            flag = true;
            break;
        }
    }
    if(!flag){
        cout << "No!"<<endl;
    }
    return 0;
}