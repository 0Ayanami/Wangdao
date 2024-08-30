//
// Created by muyou on 2024/7/29.
//
#include "iostream"
#include "string"

using namespace std;

int nextTable[1000000];

void GetNextTable(string p){
    int j = 0;
    nextTable[j] = -1;
    int i = -1;
    int m = p.size();
    while(j < m){
        if(i == -1|| p[i] == p[j]){
            i++;
            j++;
            nextTable[j] = i;
        } else{
            i = nextTable[i];
        }
    }
}

int KMP(string t, string p){
    int n = t.size(), m = p.size();
    int i = 0, j = 0, num = 0;
    GetNextTable(p);
    while(i < n && j < m){
        if(j == -1 || t[i] == p[j]){
            i++;
            j++;
        } else{
            j = nextTable[j];
        }
        if(i <= n && j == m){
            num++;
            j = nextTable[j];
        }
    }
    return num;
}
int main(){
    string t,p;
    cin >> t >> p;
    cout << KMP(t,p);
    return 0;
}