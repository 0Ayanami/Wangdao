#include<iostream>
#include<vector>
#include<climits>
 
using namespace std;
 
int l1, l2, l3, c1, c2, c3;

int price(int distance){
    if(distance <= l1) return c1;
    else if(distance <= l2) return c2;
    return c3;
}
 
int main(){
    while(cin >> l1 >> l2 >> l3 >> c1 >> c2 >> c3) {
        int start, end;
        cin >> start >> end;
        int n;
        cin >> n;
        vector<int> dis(n + 1, 0);
        for(int i = 2; i <= n; i ++)
            cin >> dis[i];
        vector<int> dp(n + 1, INT_MAX);
        dp[start] = 0;
        for(int i = start + 1; i <= end; i ++){
            for(int j = start; j < i; j ++){
                if(dis[i] - dis[j] <= l3){
                    dp[i] = min(dp[i], dp[j] + price(dis[i] - dis[j]));
                }
            }
        }
        cout << dp[end] << endl;
    }
    return 0;
}
