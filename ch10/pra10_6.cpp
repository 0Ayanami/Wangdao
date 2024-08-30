//
// Created by muyou on 2024/8/18.
//
#include "iostream"
#include "map"

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<int, int> countFriend;
    map<int, int> book;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        book[i] = temp;
        if (countFriend.find(temp) != countFriend.end()) {
            countFriend[temp]++;
        } else {
            countFriend[temp] = 1;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (countFriend[book[i]] == 1) {
            cout << "BeiJu" << endl;
        } else {
            cout << countFriend[book[i]] - 1 << endl;
        }
    }
    return 0;
}