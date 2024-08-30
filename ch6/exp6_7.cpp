//
// Created by muyou on 2024/8/2.
//
#include "iostream"
#include "math.h"
using namespace std;

int main(){
    int n;
    cin >> n;
    bool isPri = true;
    if(n == 1)
        isPri = false;
    int bound = sqrt(n);
    for (int i = 2; i <= bound; ++i) {
        if(n % i == 0)
            isPri = false;
    }
    if(isPri)
        cout << "yes";
    else
        cout << "no";
    return 0;
}