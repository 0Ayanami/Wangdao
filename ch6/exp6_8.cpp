//
// Created by muyou on 2024/8/2.
//
#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    for (int i = 0; i < n; ++i) {
        num[i] = 1;
    }
    num[0] = 0;
    num[1] = 0;
    vector<int> prime;
    for (int i = 2; i < n; ++i) {
        if (num[i] != 1)
            continue;
        if(i % 10 == 1)
            prime.push_back(i);
        for (int j = i*i; j < n; j += i) {
            num[j] = 0;
        }
    }
    if(prime.empty())
        cout << -1 << endl;
    else{
        for (int i = 0; i < prime.size(); ++i) {
            if(i != 0)
                cout << " " << prime[i];
            else
                cout << prime[i];
        }
        cout << endl;
    }
    return 0;
}