//
// Created by muyou on 2024/8/13.
//
#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int maxN = 8;
bool djx[maxN][maxN] = {false};
bool col[maxN] = {false};

vector<int> vi;        //可以用string

bool Judge(int x, int y) {    //用于判断当前条件下（djx数组目前的状态下）对角线上是否已经有棋子了
    int y2 = y;
    for (int i = x; i >= 0; i--) {
        if (y >= 0 && djx[i][y--] == true)
            return false;
        if (y2 < 8 && djx[i][y2++] == true)
            return false;
    }
    return true;
}

void DFS(int now, int ans) {
    if (now == 8) {
        vi.push_back(ans);
        return;
    }
    for (int j = 0; j < 8; j++) {        //完全的DFS思路
        if (!col[j] && Judge(now, j)) {
            col[j] = true;
            djx[now][j] = true;           //注意：题目里的所有数字都是从1开始计数，所以使用j+1记录answer
            DFS(now + 1, ans * 10 + j + 1);        //可以用string，由于最长8为十进制数，所以用int了
            col[j] = false;
            djx[now][j] = false;
        }
    }
}

int main() {
    DFS(0, 0);
    sort(vi.begin(), vi.end());      //对answer进行排序
    int index;
    while (cin >> index) {
        cout << vi[index - 1] << endl;    //注意题目中所有数字均为从1计数
    }
    return 0;
}