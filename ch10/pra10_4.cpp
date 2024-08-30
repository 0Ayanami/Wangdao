//
// Created by muyou on 2024/8/16.
//
#include "iostream"
#include "map"
using namespace std;

int main(){
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        map<int, int> myMap;
        for (int i = 0; i < n; ++i) {
            int temp;
            cin >> temp;
            if(myMap.find(temp) == myMap.end())
                myMap[temp] = 1;
            else
                myMap[temp]++;
        }
        int num;
        cin >> num;
        cout << myMap[num] << endl;
    }
    return 0;
}