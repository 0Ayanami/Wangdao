//
// Created by muyou on 2024/7/29.
//
#include "iostream"

using namespace std;

const int MAX = 1000;
int nextTable[MAX];
int pattern[MAX];
int text[MAX];

void GetNextTable(int m) {
    int j = 0;
    nextTable[j] = -1;
    int i = nextTable[j];
    while(j < m){
        if(i == -1 || pattern[i] == pattern[j]){
            i++;
            j++;
            nextTable[j] = i;
        } else{
            i = nextTable[i];
        }
    }
}

int KMP(int n, int m){
    int i = 0, j =0;
    GetNextTable(m);
    while (i < n && j<m){
        if(j == -1 || text[i] == pattern[j]){
            i++;
            j++;
        } else{
            j = nextTable[j];
        }
    }
    if(j == m)
        return i - j + 1;
    else
        return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        for (int i = 0; i < n; ++i) {
            cin >> text[i];
        }
        for (int i = 0; i < m; ++i) {
            cin >> pattern[i];
        }
        cout << KMP(n,m);
    }
    return 0;
}