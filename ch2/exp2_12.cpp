//
// Created by muyou on 2024/7/15.
//
#include "iostream"
#include "cstdio"

using namespace std;
int daytab[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

bool isLeapYear(int year) {
    if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
        return true;
    return false;
}
int main(){
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int y, m,d;
        scanf("%d%d%d",&y,&m,&d);
        int isleap = isLeapYear(y);
        d++;
        if(d > daytab[isleap][m]){
            d = 1;
            m ++;
            if(m > 12){
                m = 1;
                y++;
            }
        }
        printf("%d-%02d-%02d\n",y,m,d);
    }
    return 0;
}