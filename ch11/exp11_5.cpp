//
// Created by muyou on 2024/8/20.
//
#include "iostream"
#include "algorithm"

using namespace std;

const int MAXN = 100;
struct Edge{
    int from;
    int to;
    int length;
    bool operator<(const Edge& e)const{
        return length<e.length;
    }
};

Edge edge[MAXN*MAXN];
int father[MAXN];
int height[MAXN];

void Init(int n){
    for (int i = 0; i < n; ++i) {
        father[i] = i;
        height[i] = 0;
    }
}

int Find(int x){
    if(x != father[x]){
        father[x] = Find(father[x]);
    }
    return father[x];
}

void Union(int x,int y){
    x = Find(x);
    y = Find(y);

    if(x != y){
        if(height[x] < height[y]){
            father[x] = y;
        }else if(height[x] > height[y]){
            father[y] = x;
        }else{
            father[y] = x;
            height[x]++;
        }
    }
}

int Kruskal(int n,int edgenumber){
    Init(n);
    sort(edge, edge+edgenumber);
    int sum=0;
    for (int i = 0; i < edgenumber; ++i) {
        Edge current = edge[i];
        if(Find(current.from) != Find(current.to)){
            Union(current.from, current.to);
            sum += current.length;
        }
    }
    return sum;
}

int main(){
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        int edgenumber = n*(n-1)/2;
        for (int i = 0; i < edgenumber; ++i) {
            int status;
            cin >> edge[i].from >> edge[i].to >> edge[i].length >> status;
            if(status == 1)
                edge[i].length = 0;
        }
        int ans = Kruskal(n, edgenumber);
        cout << ans << endl;
    }
    return 0;
}