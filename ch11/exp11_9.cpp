//
// Created by muyou on 2024/8/24.
//
#include "iostream"
#include "vector"
#include "queue"
#include "string.h"

using namespace std;

const int MAXN = 1000;

int inDegree[MAXN];
vector<int> graph[MAXN];

vector<int> TopologicalSort(int n) {
    vector<int> topology;
    priority_queue<int, vector<int>, greater<int>> node;
    for (int i = 1; i <= n; ++i) {
        if (inDegree[i] == 0)
            node.push(i);
    }
    while (!node.empty()) {
        int u = node.top();
        topology.push_back(u);
        node.pop();
        for (int i = 0; i < graph[u].size(); ++i) {
            int v = graph[u][i];
            inDegree[v]--;
            if (inDegree[v] == 0) {
                node.push(v);
            }
        }
    }
    return topology;
}

int main() {
    int n, m;
    cin >> n >> m;
    memset(inDegree, 0, sizeof(inDegree));
    memset(graph, 0, sizeof(graph));

    for (int i = 0; i < m; ++i) {
        int p1, p2;
        cin >> p1 >> p2;
        graph[p1].push_back(p2);
        inDegree[p2]++;
    }
    vector<int> ans = TopologicalSort(n);
    for (int i = 0; i < ans.size(); ++i) {
        if (i != 0)
            cout << " ";
        cout << ans[i];
    }
    return 0;
};