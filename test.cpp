//
// Created by muyou on 2024/7/31.
//
#include "iostream"
#include "string"
#include "map"
using namespace std;

map<string, string> father;
map<string, int> height;
map<string, int> weight;

string Find(string name){
    if(father.find(name) != father.end()){
        if(father[name] != name){
            father[name] = Find(father[name]);
        }
    }else{
        father[name] = name;
        height[name] = 0;
    }
}

void Union(string x, string y){

    int i = weight[x], j = weight[y];
    if(x != Find(x)){
        weight[Find(x)] += i;
    }
    if ((y != Find(y))){
        weight[Find(y)] += j;
    }
    x = Find(x);
    y = Find(y);

    if(x!=y){
        if(height[x] < height[y]){
            father[x] = y;
            weight[y] += weight[x];
        }else if(height[x] > height[y]){
            father[y] = x;
            weight[x] += weight[y];
        }else{
            father[y] = x;
            weight[x] += weight[y];
            height[x]++;
        }
    }

}

int main() {
    int n,k;
    while(cin >> n >> k){

    }
}