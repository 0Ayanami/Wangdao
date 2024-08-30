//
// Created by muyou on 2024/7/25.
//
#include "iostream"
#include "string"

using namespace std;

int main() {
    string str;
    getline(cin, str);
    str = " " + str + " ";
    string tar, temp;
    cin >> tar >> temp;
    tar = " " + tar + " ";
    temp = " " + temp + " ";
    while (str.find(tar) != string::npos) {
        int found = str.find(tar);
        str.erase(found, tar.size());
        str.insert(found, temp);
    }
    cout << str.substr(1, str.size()-2);
    return 0;
}
