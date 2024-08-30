//
// Created by muyou on 2024/8/2.
//
#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    while(cin >> num){
        int cnt = 0;
        for(int i = 2; i <= sqrt(num); i ++){
            while(num % i == 0){
                cnt ++;
                num /= i;
            }
            if(num <= 1) break;
        }
        // 存在大于 sqrt(num) 的因子
        if(num > 1) cnt ++;
        cout << cnt;
    }
    return 0;
}