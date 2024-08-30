//
// Created by muyou on 2024/7/18.
//
#include "iostream"

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int step = 0;
        if(n == 0)
            break;
        while(n != 1){
            if(n % 2 == 0){
                n /= 2;
                step ++;
            } else{
                n = 3 * n + 1;
                n /= 2;
                step ++;
            }
        }
        cout << step << endl;
    }
    return 0;
}