//
// Created by muyou on 2024/8/13.
//
#include "iostream"
#include "string.h"
#include "algorithm"

using namespace std;

const int MAXN = 25;
int sticks[MAXN];
bool visited[MAXN];
int side;
int m;

bool DFS(int sum, int number, int position) {
    if (number == 3) {
        return true;
    }
    int sample = 0;
    for (int i = position; i < m; ++i) {
        if (visited[i] || sum + sticks[i] > side || sticks[i] == sample) {
            continue;
        }
        visited[i] = true;
        if (sum + sticks[i] == side) {
            if (DFS(0, number + 1, 0)) {
                return true;
            } else {
                sample = sticks[i];
            }
        } else {
            if (DFS(sum + sticks[i], number, i + 1)) {
                return true;
            } else {
                sample = sticks[i];
            }
        }
        visited[i] = false;
    }
    return false;
}

bool Compare(int x, int y) {
    return x > y;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        cin >> m;
        int length = 0;
        for (int i = 0; i < m; ++i) {
            cin >> sticks[i];
            length += sticks[i];
        }
        memset(visited, false, sizeof(visited));
        if (length % 4 != 0) {
            cout << "no" << endl;
            continue;
        }
        side = length / 4;
        sort(sticks, sticks + m, Compare);
        if (sticks[0] > side) {
            cout << "no" << endl;
            continue;
        }
        if(DFS(0,0,0))
            cout<<"yes"<<endl;
        else
            cout << "no" <<endl;

    }
    return 0;
}