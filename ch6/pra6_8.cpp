//
// Created by muyou on 2024/8/2.
//
#include "iostream"
#include "vector"

using namespace std;

void getPrime(vector<int> &factors, int num) {
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            factors[i]++;
            num /= i;
            if (num <= 1) return;
        }
    }
    if (num > 1) factors[num]++;
}

int main(){
    int n, a;
    while(cin >> n >> a){
        vector<int> factor_a(1000), factor_n(1000);
        getPrime(factor_a, a);
        for(int i = 2; i <= n; i ++)
            getPrime(factor_n, i);
        int k = 1000;
        for(int i = 2; i <= a; i ++){
            if(factor_a[i]) k = min(k, factor_n[i]/factor_a[i]);
        }
        cout << k << endl;
    }
    return 0;
}