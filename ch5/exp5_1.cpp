//
// Created by muyou on 2024/7/29.
//
#include <iostream>
#include <vector>
using namespace std;

//判断完数盈数
int Sum(int k){
    int sum = 0;
    for(int i = 1; i < k; i++){
        if(k % i == 0){
            sum += i;
        }
    }
    return sum;
}

int main() {
    vector<int> eiVector; //完数
    vector<int> giVector; //盈数
    for(int i = 2; i <= 60; i++){
        if(i == Sum(i)){
            eiVector.push_back(i);
        }else if(i < Sum(i)){
            giVector.push_back(i);
        }
    }
    printf("E: ");
    for(int i = 0; i < eiVector.size(); i++){
        printf("%d ", eiVector[i]);
    }
    printf("G: 2 ");
    for(int i = 0; i < giVector.size() - 1; i++){
        printf("%d ", giVector[i]);
    }
    printf("%d", giVector[giVector.size() - 1]);
}