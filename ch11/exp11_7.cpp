//
// Created by muyou on 2024/8/21.
//
#include "iostream"
#include "vector"
#include "queue"
#include "string.h"
#include "climits"

using namespace std;

const int MAXN = 1001;
const int INF = INT_MAX;

struct Edge {
    int to;
    int length;
    int cost;

    Edge(int t, int l, int c) : to(t), length(l), cost(c) {}
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
int costs[MAXN];

void Dijkstra(int s) {
    dis[s] = 0;
    costs[s] = 0;
    priority_queue<Point> myQueue;
    myQueue.push(Point(s, 0));
    while(!myQueue.empty()){
        int u = myQueue.top().number;
        myQueue.pop();
        for (int i = 0; i < graph[u].size(); ++i) {
            int c = graph[u][i].cost;
            int d = graph[u][i].length;
            int t = graph[u][i].to;
            if(dis[u] + d < dis[t] || (dis[u] + d == dis[t] && costs[u] + c < costs[t])){
                dis[t] = dis[u] + d;
                costs[t] = costs[u] + c;
                myQueue.push(Point(t,dis[t]));
            }
        }
    }
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;
        fill(dis, dis + n + 1, INF);
        fill(costs, costs + n + 1, INF);
        memset(graph, 0, sizeof(graph));

        for (int i = 0; i < m; ++i) {
            int from, to, len, cos;
            cin >> from >> to >> len >> cos;
            graph[from].push_back(Edge(to, len, cos));
            graph[to].push_back(Edge(from, len, cos));
        }
        int s, t;
        cin >> s >> t;
        Dijkstra(s);
        cout << dis[t] << " " << costs[t] << endl;
    }
    return 0;
}