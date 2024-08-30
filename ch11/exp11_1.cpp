//
// Created by muyou on 2024/8/18.
//
#include "iostream"

using namespace std;

const int MAXN = 1000;
int father[MAXN];
int height[MAXN];

void Initial(int n) {
    for (int i = 0; i <= n; i++) {
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
        if (height[x] < height[y]) {
            father[x] = y;
        } else if (height[y] < height[x]) {
            father[y] = x;
        } else {
            father[y] = x;
            height[x]++;
        }
    }
}


int main() {
    int n, m;
    while (cin >> n) {
        if (n == 0)
            break;
        cin >> m;
        Initial(n);
        for (int i = 0; i < m; ++i) {
            int x,y;
            cin >> x >> y;
            Union(x,y);
        }
        int answer = -1;
        for (int i = 1; i <= n; i++) {
            if (Find(i) == i) {
                answer++;
            }
        }
        cout << answer << endl;
    }
    return 0;
}