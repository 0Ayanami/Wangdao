//
// Created by muyou on 2024/7/18.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<int> numbers;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            numbers.push_back(temp);
        }
        sort(numbers.begin(), numbers.end());
        for (const auto &item: numbers)
            cout << item << " ";
        cout << endl;
    }
    return 0;
}