//
// Created by muyou on 2024/8/18.
//
#include "iostream"

using namespace std;

const int MAXN = 10001;

int father[MAXN];
int height[MAXN];
int degree[MAXN];
bool visit[MAXN];

void Init() {
    for (int i = 1; i <= MAXN; ++i) {
        father[i] = i;
        height[i] = 0;
        visit[i] = false;
        degree[i] = 0;
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
        if (height[x] < height[y])
            father[x] = y;
        else if (height[x] > height[y])
            father[y] = x;
        else {
            father[y] = x;
            height[x]++;
        }
    }
}

bool isTree() {
    bool flag = true;
    int component = 0;
    int root = 0;
    for (int i = 1; i < MAXN; ++i) {
        if (!visit[i]) {
            continue;
        }
        if (father[i] == i)
            component++;
        if (degree[i] == 0)
            root++;
        else if (degree[i] > 1)
            flag = false;
    }
    if (component != 1 || root != 1)
        flag = false;
    if (component == 0 && root == 0)
        flag = true;
    return flag;
}

int main() {
    int k = 1;
    int m, n;
    Init();
    while (cin >> m >> n) {
        if (m == -1 && n == -1)
            break;

        if (m == 0 && n == 0) {
            if (isTree()) {
                cout << "Case " << k++ << " is a tree." << endl;
            } else
                cout << "Case " << k++ << " is not a tree." << endl;
            Init();
        } else {
            Union(m, n);
            degree[n]++;
            visit[m] = true;
            visit[n] = true;
        }
    }
    return 0;
}