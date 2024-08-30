//
// Created by muyou on 2024/8/30.
//
#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;
const int maxn = 300;

int main(){
    int n;
    while(scanf("%d", &n)){
        int dp1[maxn];
        int dp2[maxn];
        int A[maxn];
        for(int i = 0; i < n; i++){
            scanf("%d", &A[i]);//输入
        }

        /*从前往后寻找以i点为尾的最长递增子列*/
        for(int i = 0; i < n; i++){
            dp1[i] = 1;/*每点为尾的子列长度最小都为1*/
            for(int j = 0; j < i; j++){
                if(A[j] < A[i]){
                    dp1[i] = max(dp1[i], dp1[j] + 1);
                }
            }
        }

        /*从后往前寻找以i点为尾的最长递增子列*/
        for(int i = n - 1; i >= 0; i--){
            dp2[i] = 1;/*每点为尾的子列长度最小都为1*/
            for(int j = n - 1; j > i; j--){
                if(A[j] < A[i]){
                    dp2[i] = max(dp2[i], dp2[j] + 1);
                }
            }
        }

        int ans = 1;
        /*寻找点i两个子列和的最大值*/
        for(int i = 0; i < n; i++){
            if(dp1[i] + dp2[i] > ans){
                ans = dp1[i] + dp2[i];
            }
        }
        printf("%d\n", n - ans + 1);//重复减了自身两次，故加1
    }
    return 0;
}