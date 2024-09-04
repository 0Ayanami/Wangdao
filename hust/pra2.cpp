//
// Created by muyou on 2024/9/4.
//
#include <bitset>
#include <iostream>

using namespace std;

int main() {
    char s;

    while (cin >> s) {
        bitset<8> bs(s);
        auto c = bs.count();
        bs[7] = (c % 2 != 1);
        cout << bs << endl;
    }

    return 0;
}