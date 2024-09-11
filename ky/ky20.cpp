//
// Created by muyou on 2024/9/12.
//
#include "iostream"

using namespace std;

const int MAXN = 100;

int main() {
    int num[MAXN];
    for (int i = 2; i <= 60; ++i) {
        int sum = 0;
        for (int j = 1; j <= i; ++j) {
            if (i % j == 0) {
                sum = sum + j;
            }
        }
        if (sum == 2 * i) {
            num[i] = 1;
        } else if(sum > 2 * i){
            num[i] = 2;
        }else{
            num[i] = 0;
        }
    }
    cout << "E: ";
    for (int i = 2; i <= 60; ++i) {
        if (num[i] == 1)
            cout << i << " ";
    }
    cout << endl;
    cout << "G: ";
    for (int i = 2; i <= 60; ++i) {
        if (num[i] == 2)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}