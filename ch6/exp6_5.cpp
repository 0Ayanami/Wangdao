//
// Created by muyou on 2024/8/2.
//
#include "iostream"

using namespace std;

int gcd(int x ,int y){
    if(y == 0)
        return x;
    else
        return gcd(y, x%y);
}
int main() {
    int m, n;
    while (cin >> m >> n) {
        cout << gcd(m,n)<<endl;
    }
    return 0;
}