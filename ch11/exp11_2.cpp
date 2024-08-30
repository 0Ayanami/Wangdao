//
// Created by muyou on 2024/8/18.
//
#include "iostream"
#include "cstdio"

using namespace std;

const int MAXN = 1010;

int father[MAXN];
int height[MAXN];

void Initial(int n) {
    for (int i =1; i <= n; ++i) {
        father[i] = i;
        height[i] = 0;
    }
    return ;
}

int Find(int x) {
    if (x != father[x]) {
        father[x] = Find(father[x]);
    }
    return father[x];
}

void Union(int x, int y) {
    x = Find(x);
    y = Find(y);
    if (x != y) {
        if (height[x] < height[y]) {
            father[x] = y;
        } else if (height[x] > height[y]) {
            father[y] = x;
        } else {
            father[y] = x;
            height[x]++;
        }
    }
    return ;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;
        Initial(n);
        while (m--) {
            int x, y;
            scanf("%d", &x);
            scanf("%d", &y);
            Union(x, y);
        }
        int answer = 0;
        for (int i = 1; i <= n; i++) {
            if (Find(i) == i)
                answer++;
        }
        if (answer != 1)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}