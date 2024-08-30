//
// Created by muyou on 2024/8/21.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

struct Edge {
    char from;
    char to;
    int length;

    Edge(char f, char t, int l) : from(f), to(t), length(l) {}

    bool operator<(const Edge &e) const {
        return length < e.length;
    }
};

vector<Edge> edge;
const int MAXN = 101;
int father[MAXN];
int height[MAXN];

void Init(int n) {
    for (int i = 0; i < n; ++i) {
        father[i] = i;
        height[i] = 0;
    }
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
        if (height[x] > height[y]) {
            father[y] = x;
        } else if (height[x] < height[y]) {
            father[x] = y;
        } else {
            father[y] = x;
            height[x]++;
        }
    }
}

int Kruskal(int n) {
    Init(n);
    sort(edge.begin(), edge.end());
    int sum = 0;
    for (int i = 0; i < edge.size(); ++i) {
        if (Find(edge[i].from - 'A' ) != Find(edge[i].to - 'A')) {
            Union(edge[i].from - 'A', edge[i].to - 'A');
            sum += edge[i].length;
        }
    }
    return sum;
}

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            break;

        for (int i = 0; i < n - 1; ++i) {
            int num;
            char c;
            cin >> c >> num;
            for (int j = 0; j < num; ++j) {
                char t;
                int len;
                cin >> t >> len;
                Edge e(c, t, len);
                edge.push_back(e);
            }
        }
        cout << Kruskal(n) << endl;
    }
    return 0;
}