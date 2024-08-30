//
// Created by muyou on 2024/8/2.
//
#include "iostream"
#include "math.h"

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int num[n];
        for (int i = 0; i < n; ++i) {
            cin >> num[i];
        }
        for (int i = 0; i < n; ++i) {
            int sum = 0;
            int temp = num[i];
            int j = 1;
            for (; j*j < temp; ++j) {
                if(temp % j == 0)
                    sum += 2;
            }
            if(j * j == temp)
                sum++;
            cout << sum << endl;
        }
    }
    return 0;
}