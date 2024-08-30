//
// Created by muyou on 2024/8/24.
//
#include "iostream"
#include "vector"
#include "queue"
#include "string.h"

using namespace std;

const int MAXN = 500;

vector<int> graph[MAXN];
int inDegree[MAXN];

bool TopologicalSort(int n) {
    queue<int> nodes;
    for (int i = 0; i < n; ++i) {
        if(inDegree[i] == 0)
            nodes.push(i);
    }
    int number = 0;
    while(!nodes.empty()){
        int u = nodes.front();
        nodes.pop();
        number++;
        for (int i = 0; i < graph[u].size(); ++i) {
            int v = graph[u][i];
            inDegree[v]--;
            if(inDegree[v] == 0){
                nodes.push(v);
            }
        }
    }
    return n==number;
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;
        memset(graph, 0, sizeof (graph));
        memset(inDegree, 0, sizeof (inDegree));

        for (int i = 0; i < m; ++i) {
            int from, to;
            cin >> from >> to;
            graph[from].push_back(to);
            inDegree[to]++;
        }
        if(TopologicalSort(n)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}