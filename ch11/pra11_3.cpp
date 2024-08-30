//
// Created by muyou on 2024/8/18.
//
#include<iostream>
#include<map>
#include<string>

using namespace std;

const int maxn = 1001;
int father[maxn];
int height[maxn];
int weight[maxn];
struct r {           //记录结果result
    int people, value;
};

map<string, r> res;//用于输出时候的顺序
map<string, int> finalres;
map<string, int> stringToInt;//形成字符串转int的映射
map<int, string> intToString;//形成int转字符串的映射

int index;//映射函数对应的下标。也是所有的人数

void init() {
    res.clear();
    stringToInt.clear();
    intToString.clear();
    finalres.clear();
    for (int i = 0; i < maxn; i++) {
        father[i] = i;
        height[i] = 0;
        weight[i] = 0;
    }
    index = 0;
}

int change(string str) {//映射函数
    if (stringToInt.find(str) != stringToInt.end())
        return stringToInt[str];
    stringToInt[str] = index;//形成双向映射
    intToString[index] = str;
    return index++;
}

int find(int x) {
    if (father[x] != x)
        father[x] = find(father[x]);
    return father[x];
}

void Union(int x, int y) { //weight点权最大的当头节点，可能会有子节点的点权大于父节点的情况
    int headx, heady;
    int fx = find(x);
    int fy = find(y);
    headx = fx;
    heady = fy;
    if (height[x] > height[fx]) { //判断子节点和父节点的情况，始终让 父节点的点权最大
        father[fx] = x;
        father[x] = x;
        headx = x;
    }
    if (height[y] > height[fy]) {
        father[fy] = y;
        father[y] = y;
        heady = y;
    }
    if (height[headx] >= height[heady])
        father[heady] = headx;
    else if (height[headx] < height[heady])
        father[headx] = heady;
}

int main() {
    int n, k;
    while (cin >> n >> k) {
        init();
        int x, y, w;
        string s1, s2;
        for (int i = 0; i < n; i++) {
            cin >> s1 >> s2 >> w;
            x = change(s1);
            y = change(s2);
            weight[x] += w;
            height[x] += w;
            height[y] += w;
            Union(x, y);
        }
        for (int i = 0; i < index; i++) {
            find(i);//所有路径都压缩一次，最后变成只有一个根的树
            res[intToString[father[i]]].people++;
            res[intToString[father[i]]].value += weight[i];
        }
        int sum = 0;
        for (auto it = res.begin(); it != res.end(); it++) {
            if (it->second.people > 2 && it->second.value > k) {
                finalres[it->first] = it->second.people;
                sum++;
            }
        }
        cout << sum << endl;
        for (auto it = finalres.begin(); it != finalres.end(); it++) {
            cout << it->first << " " << it->second << endl;
        }
    }
    return 0;
}