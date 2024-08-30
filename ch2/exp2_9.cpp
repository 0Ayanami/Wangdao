//
// Created by muyou on 2024/7/15.
//
#include "iostream"

using namespace std;

bool is_run(int y){
    if(y % 4 == 0){
        if(y % 100 == 0){
            if(y % 400 == 0)
                return true;
            else
                return false;
        }
        return true;
    } else
        return false;
}

int days[12] = {31, 28 , 31, 30, 31, 30, 31, 31, 30, 31,30,31};

int main() {
    int y, m, d;
    while (cin >> y >> m >> d) {
        int day = 0;
        for (int i = 0; i < m-1; ++i) {
            day += days[i];
            if(i == 1 && is_run(y))
                day++;
        }
        day += d;
        cout << day;
    }
    return 0;
}