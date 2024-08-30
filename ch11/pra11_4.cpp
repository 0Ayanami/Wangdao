//
// Created by muyou on 2024/8/21.
//
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include "math.h"

using namespace std;
const int maxn = 101;

struct Point {
    float x, y;
};

struct G {
    int from;
    int to;
    float weight;

    inline bool operator<(const G &g) const {
        return weight < g.weight;
    }
};

vector<G> graph;
vector<Point> vec;

int father[maxn];
int height[maxn];

void init(int n) {
    for (int i = 0; i <= n; i++) {
        father[i] = i;
        height[i] = 0;
    }
}

float getdis(Point x, Point y) {
    return pow(pow((x.x - y.x), 2) + pow((x.y - y.y), 2), 0.5);
}

int find(int x) {
    if (x != father[x]) {
        father[x] = find(father[x]);
    }
    return father[x];
}

void Union(int x, int y) {
    x = find(x);
    y = find(y);
    if (x != y) {
        if (height[x] > height[y]) {
            father[y] = x;
        } else if (height[x] < height[y]) {
            father[x] = y;
        } else {
            father[x] = y;
            height[y]++;
        }
    }
}

float Kruskal(int n){
    init(n);
    sort(graph.begin(), graph.end());
    float sum = 0;
    for (int i = 0; i < graph.size(); ++i) {
        if (find(graph[i].from) != find(graph[i].to)){
            Union(graph[i].from, graph[i].to);
            sum += graph[i].weight;
        }
    }
    return sum;
}

int main() {
    int n;
    while (cin >> n) {
        Point p;
        G g;
        graph.clear();
        vec.clear();
        for (int i = 0; i < n; i++) {
            cin >> p.x >> p.y;
            vec.push_back(p);
        }
        for (int i = 0; i < vec.size() - 1; i++) {
            for (int j = i + 1; j < vec.size(); j++) {
                g.from = i;
                g.to = j;
                g.weight = getdis(vec[i], vec[j]);
                graph.push_back(g);
            }
        }
        printf("%.2f\n", Kruskal(n));
    }
    return 0;
}