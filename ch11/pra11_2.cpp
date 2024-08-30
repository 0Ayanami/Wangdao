//
// Created by muyou on 2024/8/18.
//
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;
map<int, int> father;  //通过散列表map实现的father数组
map<int, int> height;  //记录每个节点的高度
int find(int x) {
    if (father.find(x) != father.end()) {
        if (father[x] != x)
            father[x] = find(father[x]);  //路径压缩(最后自己通过例子模拟下过程)
    } else {//如果还没有出现的新节点。把father设成他自己(表示根节点)，height设成0
        father[x] = x;
        height[x] = 0;
    }
    return father[x];
}

void Union(int a, int b) {//合并函数
    a = find(a);
    b = find(b);
    if (a != b) {
        if (height[a] > height[b])
            father[b] = a;
        else if (height[b] > height[a])
            father[a] = b;
        else {
            father[a] = b;
            height[a]++;
        }
    }
}

int main() {
    int i, j;
    while (cin >> i >> j) {
        //if(i==0)break;
        Union(i, j);
    }
    int sum = 0;
    for (auto it = father.begin(); it != father.end(); it++) {
        if (it->first == it->second)
            sum++;  //只要有一个父亲是本身的就说明是根节点
    }
    cout << sum << endl;
    return 0;
}