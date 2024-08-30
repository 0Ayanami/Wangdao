//
// Created by muyou on 2024/7/18.
//
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct ant{
    int location;
    int velocity;
};

bool Comp(ant a, ant b) {
    return a.location < b.location;
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        ant Ants[n];
        int Apos;
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &Ants[i].location, &Ants[i].velocity);
            if (Ants[i].velocity == 0) {
                Apos = Ants[i].location;
            }
        }        //输入结构体数组,记录A蚂蚁初始位置
        vector<int>left, right;        //定义两个容器分别存放A左侧向右蚂蚁，A右侧向左蚂蚁
        sort(Ants, Ants + n, Comp);
        for (int i = 0; i < n; i++) {
            if (Ants[i].location < Apos && Ants[i].velocity == 1) {
                left.push_back(Ants[i].location);
            }
            if (Ants[i].location > Apos && Ants[i].velocity == -1) {
                right.push_back(Ants[i].location);
            }
        }        //将LR和RL元素的位置加入容器中
        if (left.size() == right.size()) {
            printf("Cannot fall!");
        }
        else if (left.size() > right.size()) {
            printf("%d", 100 - left[left.size() - right.size() - 1]);
        }
        else {
            printf("%d", right[left.size()]);
        }
    }
}