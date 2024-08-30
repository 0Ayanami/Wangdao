//
// Created by muyou on 2024/8/24.
//
#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#include <climits>
#include <algorithm>
using namespace std;

const int MAXN = 1005;
const int INF = INT_MAX;

struct Edge {
    int to;  // 边指向的顶点id
    int length;  // 边的长度
    Edge(int to, int length) : to(to), length(length) {}
};

struct Point {
    int id;  // 顶点编号
    int distance;  // 从源点s到该点的路径距离
    Point(int id, int distance) : id(id), distance(distance) {}
    bool operator< (Point p) const {
        return distance > p.distance;
    }
};

vector<Edge> graph[MAXN];  // 邻接表实现的图
int dis[3][MAXN];  // 源点s到各点的距离（分为阵营1和阵营2，索引0那一行不用）
int leader[MAXN];  // 表示各点的领导者，取值为1或2

void dijkstra(int s) {
    int ld = leader[s];

    priority_queue<Point> q;
    dis[ld][s] = 0;
    q.push(Point(s, dis[ld][s]));
    while (!q.empty()) {
        int u = q.top().id;
        q.pop();
        for (int i = 0; i < graph[u].size(); i++) {
            int v = graph[u][i].to;
            if (leader[v] != ld) {
                continue;
            }
            int len = graph[u][i].length;
            if (dis[ld][v] > dis[ld][u] + len) {  // 新的路径在距离上优于之前的路径，则更新
                dis[ld][v] = dis[ld][u] + len;
                q.push(Point(v, dis[ld][v]));
            }
        }
    }
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            break;
        }
        int m;
        scanf("%d", &m);

        memset(graph, 0, sizeof(graph));
        fill(dis[1], dis[1] + n + 1, INF);
        fill(dis[2], dis[2] + n + 1, INF);
        while (m--) {
            int from, to, length;
            scanf("%d%d%d", &from, &to, &length);
            graph[from].push_back(Edge(to, length));
            graph[to].push_back(Edge(from, length));
        }
        for (int i = 1; i <= n; i++) {
            int ld;
            scanf("%d", &ld);
            leader[i] = ld;
        }

        dijkstra(1);
        dijkstra(2);

        // 遍历所有连接两个不同阵营的道路
        int ans = INF;
        for (int i = 1; i <= n; i++) {
            for (auto& edge : graph[i]) {
                int j = edge.to;
                int ld_i = leader[i], ld_j = leader[j];
                if (ld_i != ld_j) {  // 如果这条道路是连接两个不同阵营的
                    int dis_i = dis[ld_i][i], dis_j = dis[ld_j][j];
                    if (dis_i != INF && dis_j != INF) {
                        ans = min(ans, dis_i + dis_j + edge.length);
                    }
                }
            }
        }
        if (ans == INF) {
            printf("-1\n");
        } else {
            printf("%d\n", ans);
        }
    }
    return 0;
}