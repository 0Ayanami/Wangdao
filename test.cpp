//
// Created by muyou on 2024/7/31.
//
#include "iostream"
#include "string"

using namespace std;

int main() {
    char str[10000];
    sscanf("123456abcdedfBCDEF", "%[1-9a-z]", str);
    cout << str;
}