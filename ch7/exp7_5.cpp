//
// Created by muyou on 2024/8/10.
//
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>

using namespace std;

const int MAXN = 200001;
struct Island {
    long long r;
    long long l;
};

struct Bridge {
    int number;
    long long length;
};

struct Interval {
    long long min;
    long long max;
    int number;

    bool operator<(Interval x) const {
        return max > x.max;
    }
};

bool IntervalCompare(Interval x, Interval y) {
    if (x.min == y.min) {
        return x.max < y.max;
    } else {
        return x.min < y.min;
    }
}

bool BridgeCompare(Bridge x, Bridge y) {
    return x.length < y.length;
}

Island island[MAXN];
Bridge bridge[MAXN];
Interval interval[MAXN];
long long answer[MAXN];

bool Solve(int n, int m) {
    priority_queue<Interval> myQueue;
    int position = 0;
    int number = 0;
    for (int i = 0; i < m; ++i) {
        while (myQueue.top().max < bridge[i].length
               && !myQueue.empty()) {
            myQueue.pop();
        }
        while (position < n - 1 &&
               interval[position].min <= bridge[i].length &&
               interval[position].max >= bridge[i].length) {
            myQueue.push(interval[position]);
            position++;
        }
        if (!myQueue.empty()) {
            Interval current = myQueue.top();
            myQueue.pop();
            answer[current.number] = bridge[i].number;
            number++;
        }
    }
    return number == n - 1;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    memset(island, 0, sizeof(island));
    memset(bridge, 0, sizeof(bridge));
    memset(interval, 0, sizeof(interval));
    memset(answer, 0, sizeof(answer));
    for (int i = 0; i < n; ++i) {
        scanf("%lld%lld", &island[i].l, &island[i].r);
    }
    for (int i = 0; i < m; ++i) {
        scanf("%lld", &bridge[i].length);
        bridge[i].number = i + 1;
    }
    for (int i = 0; i < n - 1; ++i) {
        interval[i].min = island[i + 1].l - island[i].r;
        interval[i].max = island[i + 1].r - island[i].l;
        interval[i].number = i;
    }
    sort(interval, interval + n - 1, IntervalCompare);
    sort(bridge, bridge + m, BridgeCompare);
    if (Solve(n, m)) {
        printf("Yes\n");
        for (int i = 0; i < n - 1; ++i) {
            printf("%lld\n", answer[i]);
        }
    } else {
        printf("No\n");
    }
    return 0;
}