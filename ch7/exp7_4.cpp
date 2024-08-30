//
// Created by muyou on 2024/8/10.
//
#include "iostream"
#include "cstdio"
#include "algorithm"


using namespace std;

struct Program {
    int startTime;
    int endTime;
};

bool comp(Program x, Program y) {
    return x.endTime < y.endTime;
}

int main() {
    int n;
    while (scanf("%d", &n)) {
        if (n == 0)
            break;
        Program arr[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d%d", &arr[i].startTime, &arr[i].endTime);
        }
        sort(arr, arr + n, comp);
        int endtime = 0, count = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i].startTime >= endtime) {
                endtime = arr[i].endTime;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}