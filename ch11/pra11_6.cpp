//
// Created by muyou on 2024/8/21.
//
#include <iostream>
#include <stdio.h>
#include <memory.h>

using namespace std;

const int mod = 100000;
const int INF = 100000000;
const int N = 102;

int n, m;
int path[N][N];
int father[N];
int vis[N];

void init() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            path[i][j] = INF;
        }
        path[i][i] = 0; //对角线
        father[i] = i;
        vis[i] = 0;
    }
}

int find(int x) {
    if (x != father[x]) {
        father[x] = find(father[x]);
    }
    return father[x];
}

int main() {
    int from, to;
    while (cin >> n >> m) {
        init();
        int len = 1;
        for (int i = 0; i < m; i++) {
            cin >> from >> to;
            int x = find(from);
            int y = find(to);
            if (x != y) {
                //由于代价特点，后面的大于前面所有代价之和，这样一旦连通，后面的在连接也没有意义
                father[x] = y;
                path[from][to] = path[to][from] = len;
            }
            len = len * 2;
            len = len % mod;
        }
        vis[0] = 1;
        int i, j;
        int mindis, minnode;
        for (i = 0; i < n; i++) {
            mindis = 123123123;
            minnode = 0;
            for (j = 1; j < n; j++) {
                if (!vis[j] && mindis > path[0][j]) {
                    minnode = j;
                    mindis = path[0][j];
                }
            }
            vis[minnode] = 1;
            for (j = 1; j < n; j++) {
                if (!vis[j] && path[0][j] > path[0][minnode] + path[minnode][j]) {
                    path[0][j] = path[0][minnode] + path[minnode][j];
                }
            }
        }
        for (i = 1; i < n; i++) {
            if (path[0][i] == INF) printf("-1\n");
            else printf("%d\n", path[0][i] % mod);
        }
    }
}