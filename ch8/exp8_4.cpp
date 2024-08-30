/**
#include<iostream>using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        while(a!=b){
            a>b?a/=2:b/=2;
        }cout<<a<<endl;
    }
    return 0;
}
**/
#include "iostream"

using namespace std;

int GetCeng(long long n) {
    if (n == 1)
        return 1;
    else
        return 1 + GetCeng(n / 2);
}

long long BinaryTree(long long x, long long y) {
    if (x == 1 || y == 1)
        return 1;
    else {
        int temp = GetCeng(x) - GetCeng(y);
        if (temp > 0) {
            for (int i = 0; i < temp; ++i) {
                x = x / 2;
            }
        } else if (temp < 0) {
            temp = 0 - temp;
            for (int i = 0; i < temp; ++i) {
                y = y / 2;
            }
        }
        if (x == y)
            return x;
        return BinaryTree(x / 2, y / 2);
    }
}

int main() {
    long long x, y;
    while(cin >> x >> y){
        cout << BinaryTree(x, y) << endl;}
    return 0;
}