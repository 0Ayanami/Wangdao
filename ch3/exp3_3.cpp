//
// Created by muyou on 2024/7/18.
//
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
struct student{
    string name;
    int score;
};
int flag; //升序还是降序
bool cmp(student a,student b){
    if(flag==0) return a.score>b.score;
    else return a.score<b.score; //这里必须写else，否则牛客会编译失败
}
int main(){
    int n;
    while(cin>>n){
        cin>>flag;
        student stu[n];
        for(int i=0;i<n;i++) cin>>stu[i].name>>stu[i].score;
        stable_sort(&stu[0],&stu[n],cmp); //重点：sort是不稳定排序，stable_sort才是稳定排序
        for(int i=0;i<n;i++) cout<<stu[i].name<<' '<<stu[i].score<<endl;
    }
    return 0;
}