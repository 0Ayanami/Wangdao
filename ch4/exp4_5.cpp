//
// Created by muyou on 2024/7/25.
//
#include "iostream"
#include "string"
#include "cstdio"
#include "cstring"

using namespace std;

int number[26];
int main(){
    string str;
    getline(cin, str);
    memset(number, 0, sizeof (number));
    for (int i = 0; i < str.size(); ++i) {
        if(str[i] >= 'A' && str[i] <= 'Z'){
            number[str[i] - 'A'] ++;
        }
    }
    for (int i = 0; i < 26; ++i) {
        cout << char('A'+i) << ":" << number[i] << endl;
    }
    return 0;
}