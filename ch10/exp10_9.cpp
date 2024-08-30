//
// Created by muyou on 2024/8/16.
//
#include "iostream"
#include "map"

using namespace std;

int main() {
    string str;
    cin >> str;
    map<string, int> myMap;
    for (int i = 0; i < str.size(); ++i) {
        for (int j = i + 1; j < str.size() + 1; ++j) {
            if (myMap.find(str.substr(i, j - i)) == myMap.end()) {
                myMap[str.substr(i, j - i)] = 1;
            } else {
                myMap[str.substr(i, j - i)]++;
            }
        }
    }
    for (map<string, int>::iterator it = myMap.begin(); it != myMap.end(); ++it) {
        if (it->second > 1) {
            cout << it->first << " " << it->second << endl;
        }
    }
}