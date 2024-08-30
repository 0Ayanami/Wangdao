//
// Created by muyou on 2024/8/24.
//
#include "iostream"
#include "climits"
#include "vector"
#include "queue"
#include "string.h"

using namespace std;

const int MAXN = 1001;
const int INF = INT_MAX;

struct Edge {
    int to;
    int length;

    Edge(int t, int l) : to(t), length(l) {}
};

vector<Edge> graph[MAXN];
int earliest[MAXN];
int latest[MAXN];
int inDegree[MAXN];

void CriticalPath(int n) {
    vector<int> topology;
    queue<int> node;
    for (int i = 0; i < n; ++i) {
        if (inDegree[i] == 0) {
            node.push(i);
            earliest[i] = 1;
        }
    }
    while (!node.empty()) {
        int u = node.front();
        topology.push_back(u);
        node.pop();
        for (int i = 0; i < graph[u].size(); ++i) {
            int v = graph[u][i].to;
            int l = graph[u][i].length;
            earliest[v] = max(earliest[v], earliest[u] + l);
            inDegree[v]--;
            if (inDegree[v] == 0) {
                node.push(v);
            }
        }
    }
    for (int i = topology.size()-1; i >= 0; --i) {
        int u = topology[i];
        if(graph[u].size() == 0){
            latest[u] = earliest[u];
        }else{
            latest[u] = INF;
        }
        for (int j = 0; j < graph[u].size();++j) {
            int v = graph[u][j].to;
            int l = graph[u][j].length;
            latest[u] = min(latest[u], latest[v] - l);
        }

    }
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        memset(graph, 0, sizeof (graph));
        memset(earliest, 0, sizeof (earliest));
        memset(latest, 0, sizeof (latest));
        memset(inDegree, 0, sizeof (inDegree));

        for (int i = 0; i < m; ++i) {
            int x, y, z;
            cin >> x >> y >> z;
            graph[x].push_back(Edge(y,z));
            inDegree[y]++;
        }
        CriticalPath(n);
        int answer = 0;
        for (int i = 0; i < n; ++i) {
            answer = max(answer, earliest[i]);
        }
        cout << answer << endl;
    }
    return 0;
}