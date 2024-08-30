//
// Created by muyou on 2024/7/28.
//
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    string s;
    cin >> s;
    vector<string> a(s.size());
    for (int i = 0; i < s.size(); i++)
    {
        a[i] = s.substr(i, s.size() - i);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < s.size(); i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}