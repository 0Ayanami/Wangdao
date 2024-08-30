//
// Created by muyou on 2024/7/15.
//
#include <iostream>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int inf=70000;
int main(int argc, char** argv) {
    char month[15][10]={{"0"},{"0"},{"0"},{"March"},{"April"},{"May"},{"June"},{"July"},{"August"},{"September"},{"October"},{"November"},{"December"},{"January"},{"February"}};
    char week[7][10]={{"Sunday"},{"Monday"},{"Tuesday"},{"Wednesday"},{"Thursday"},{"Friday"},{"Saturday"}};
    int y;
    int d;
    int m;
    int w;
    char mon[10];
    scanf("%d%s%d",&d,&mon,&y);
    for(int i=3;i<15;i++){
        if(strcmp(month[i],mon)==0){
            m=i;
            break;
        }
    }
    if(m>=13){
        y--;
    }
    int C=y/100;
    y=y-(y/100)*100;
    w=(C/4)-2*C+y+(y/4)+(26*(m+1)/10)+d-1;
    if(w>7)
        w%=7;
    if(w<0)
    {
        w=(w+inf)%7;

    }
    printf("%s",week[w]);
    return 0;
}