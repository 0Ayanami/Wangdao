//
// Created by muyou on 2024/8/21.
//
#include "iostream"
#include "queue"
#include "vector"
#include "string.h"

using namespace std;

const int MAXN = 200;
const int INF = INT_MAX;


struct Edge {
    int to;
    int length;

    Edge(int t, int l) : to(t), length(l) {}
};

struct Point {
    int number;
    int distance;

    Point(int n, int d) : number(n), distance(d) {}

    bool operator<(const Point &p) const {
        return distance > p.distance;
    }
};

vector<Edge> graph[MAXN];
int dis[MAXN];

void Dijkstra(int s) {
    priority_queue<Point> myQueue;
    dis[s] = 0;
    myQueue.push(Point(s, dis[s]));
    while (!myQueue.empty()) {
        int u = myQueue.top().number;
        myQueue.pop();
        for (int i = 0; i < graph[u].size(); ++i) {
            int v = graph[u][i].to;
            int d = graph[u][i].length;
            if (dis[v] > dis[u] + d) {
                dis[v] = dis[u] + d;
                myQueue.push(Point(v, dis[v]));
            }
        }
    }
}

int main() {
    int n, m, s, t;
    while (cin >> n) {
        if (n == 0)
            break;
        cin >> m;
        memset(graph, 0, sizeof(graph));
        fill(dis, dis + n, INF);
        for (int i = 0; i < m; ++i) {
            int from, to, length;
            cin >> from >> to >> length;
            graph[from].push_back(Edge(to, length));
            graph[to].push_back(Edge(from, length));
        }
        cin >> s >> t;
        Dijkstra(s);
        if (dis[t] == INF) {
            cout << -1 << endl;
        } else {
            cout << dis[t] << endl;
        }
    }
    return 0;
}