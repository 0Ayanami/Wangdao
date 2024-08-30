//
// Created by muyou on 2024/8/13.
//
#include<iostream>

using namespace std;
const int maxn = 21;
int a[maxn];
int vis[maxn], res, n;

void dfs(int now, int j) {
    for (int i = j; i < n; i++) {
        int cal = now + a[i];
        if (cal > 40) {//如果大于40则不要这个产品
            dfs(now, i + 1);
        } else if (cal < 40) {//如果小于40，则试着把这件产品放进来
            dfs(cal, i + 1);
        } else { //==40，res++就可以，然后循环继续遍历后边的情况
            res++;
        }
    }
}

int main() {
    while (cin >> n) {
        res = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            vis[i] = 0;
        }
        dfs(0, 0);
        cout << res << endl;
    }
    return 0;
}