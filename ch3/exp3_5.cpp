//
// Created by muyou on 2024/7/25.
//
#include "iostream"
#include "cstdio"
#include "algorithm"

using namespace std;

int num[100];

bool BinarySearch(int temp, int n) {
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int middle = (right + left) / 2;
        if (num[middle] < temp) {
            left = middle + 1;
        } else if (num[middle] > temp) {
            right = middle - 1;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &num[i]);
    }
    sort(num, num + n);
    int m;
    scanf("%d", &m);
    for (int i = 0; i < m; ++i) {
        int temp;
        scanf("%d", &temp);
        if (BinarySearch(temp, n)){
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }
    return 0;
}