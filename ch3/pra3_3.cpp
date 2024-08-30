//
// Created by muyou on 2024/7/21.
//
#include "iostream"
#include "algorithm"
#include "string"

using namespace std;
struct mouse{
    string hat;
    int weight;
};
bool comp(mouse x, mouse y){
    return x.weight > y.weight;
}
int main(){
    int n;
    while(scanf("%d", &n)){
        mouse m[n];
        for (int i = 0; i < n; ++i) {
            cin >> m[i].weight >> m[i].hat;
        }
        sort(m, m+n, comp);
        for (int i = 0; i < n; ++i) {
            cout << m[i].hat << endl;
        }
    }
    return 0;
}