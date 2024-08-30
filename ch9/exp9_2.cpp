//
// Created by muyou on 2024/8/11.
//
#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

void BFS(int n){
    queue<long long> myQueue;
    myQueue.push(1);
    while(!myQueue.empty()){
        long long current = myQueue.front();
        myQueue.pop();
        if(current % n == 0){
            cout << current;
            return ;
        }
        myQueue.push(current*10);
        myQueue.push(current*10+1);
    }
}
int main(){
    int n;
    cin >> n;
    BFS(n);
    return 0;
}