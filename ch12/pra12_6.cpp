//
// Created by muyou on 2024/9/2.
//
#include<iostream>
#include<cstdio>

using namespace std;

const int maxn=100;

int weight[maxn];
int dp[maxn];

//每张邮票价值为1，求背包容量M,N个物品，装满的前提下获得最小的价值；

//对于dp[i][j]来说，
//（1）如果放入第i个物品可以填满j容量的背包，那么使用前i-1个物品可以填满j-w[i]容量的背包，于是dp[i][j]=dp[i-1][j-w[i]]+1；
//（2）如果不放入第i个物品也可以填满j容量的背包,意味着只使用前i-1个物品仍然可以填满j容量的背包，dp[i][j]=dp[i-1][j]。
//总结以上两种情况：dp[i][j]取其中较小的。

//如果前i个物品不能存满背包，设置dp[i][j]为一个超过总价值的数，当更大的i,j需要使用较小的i,j的dp时，dp都不能存满背包，则较大的dp也不能存满背包。
//边界条件：dp[0][j]=MAX,不存放物品时，任何非零容量都不能存满;dp[i][0]=0，容量为0，总是可以填满且总价值为0；
//状态转移：dp[i][j]=min(dp[i-1][j-w[i]]+1,dp[i-1][j]);任何情况下，dp都不会超过设置的max值。
//优化：可以看到dp[i][j]只和上一行的数据有关，简化成dp[j]=min(dp[j-w[i]]+1,dp[j])，且遍历到dp[j]时，dp[j-w[i]]值应还未修改，所以j从后向前遍历。
int main(){
    int M,N;
    while(cin>>M>>N){
        for(int i=0;i<N;++i){
            scanf("%d",&weight[i]);
        }
        for(int i=0;i<=M;i++){
            dp[i]=maxn;
        }
        dp[0]=0;
        for(int i=0;i<N;i++){
            for(int j=M;j>=weight[i];j--){
                dp[j]=min(dp[j-weight[i]]+1,dp[j]);
            }
        }
        if(dp[M]==maxn){
            cout<<0<<endl;
        }else{
            cout<<dp[M]<<endl;
        }
    }
    return 0;
}