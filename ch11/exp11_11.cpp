//
// Created by muyou on 2024/8/24.
//
#include "iostream"
#include "queue"
#include "climits"
#include "string.h"
#include "vector"

using namespace std;

const int MAXN = 1e5 + 7;
const int INF = INT_MAX;
const int Mod = 1e9 + 7;

vector<int> graph[MAXN];
long long earliest[MAXN];
long long latest[MAXN];
int inDegree[MAXN];
long long time[MAXN];


long long CriticalPath(int n) {
    queue<int> node;
    vector<int> topology;
    for (int i = 1; i <= n; ++i) {
        if (inDegree[i] == 0)
            node.push(i);
    }

    long long sum = 0;
    while (!node.empty()) {
        int u = node.front();
        node.pop();
        topology.push_back(u);
        for (int i = 0; i < graph[u].size(); ++i) {
            int v = graph[u][i];
            earliest[v] = max(earliest[v], earliest[u] + time[u]);
            inDegree[v]--;
            if (inDegree[v] == 0) {
                node.push(v);
                sum = max(sum, earliest[v] + time[v]);
            }
        }
    }
    for (int i = topology.size() - 1; i >= 0; --i) {
        int u = topology[i];
        if (graph[u].size() == 0) {
            latest[u] = sum - time[u];
        } else {
            latest[u] = INF;
        }
        for (int j = 0; j < graph[u].size(); ++j) {
            int v = graph[u][j];
            latest[u] = min(latest[u], latest[v] - time[u]);
        }
    }
    return sum;
}

using namespace std;

int main() {
    int n, m;
    while (cin >> n >> m) {
        memset(inDegree, 0, sizeof(inDegree));
        memset(earliest, 0, sizeof(earliest));
        memset(time, 0, sizeof(time));
        memset(graph, 0, sizeof(graph));
        memset(latest, 0 ,sizeof (latest));
        for (int i = 1; i <= n; ++i) {
            cin >> time[i];
        }
        while (m--) {
            int from, to;
            cin >> from >> to;
            graph[from].push_back(to);
            inDegree[to]++;
        }
        long long sum = CriticalPath(n);
        long long answer = 1;
        for (int i = 1; i <= n; ++i) {
            answer *= latest[i] - earliest[i] + 1;
            answer %= Mod;
        }
        cout << sum << endl << answer << endl;
    }
    return 0;
}