//
// Created by muyou on 2024/7/18.
//
#include "iostream"
#include "algorithm"
using namespace std;

struct Student{
    int num;
    int grade;
};

bool comp(Student x, Student y){
    if(x.grade == y.grade)
        return x.num < y.num;
    else
        return x.grade < y.grade;
}

#define maxn 101
Student stu[maxn];

int main(){
    int n;
    scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%d%d", &stu[i].num, &stu[i].grade);
        }
        sort(stu, stu+n, comp);
        for (int i = 0; i < n; ++i) {
            printf("%d %d\n", stu[i].num, stu[i].grade);
        }
    return 0;
}