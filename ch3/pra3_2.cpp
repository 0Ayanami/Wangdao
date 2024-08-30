//
// Created by muyou on 2024/7/21.
//
#include<iostream>
#include<algorithm>
using namespace std;
bool cmp(int a,int b){
    if(a%2==1&&b%2==1) return a>b;
    if(a%2==0&&b%2==0) return a<b;
    return a%2>b%2;
}
int main(){
    int a[10];
    while(cin>>a[0]){
        for(int i=1;i<10;i++) cin>>a[i];
        sort(a,a+10,cmp);
        for(int i=0;i<10;i++) cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}