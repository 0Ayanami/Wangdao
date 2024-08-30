//
// Created by muyou on 2024/7/25.
//
#include "iostream"

using namespace std;

int main(){
    string str;
    getline(cin, str);
    for(int i = 0;i < str.size();i++){
        if(str[i] == 'z')
            str[i] = 'a';
        else if(str[i] == 'Z')
            str[i] = 'A';
        else if((str[i] >= 'a' && str[i] <= 'z')||(str[i] >= 'A' && str[i] <= 'Z'))
            str[i] ++;
    }
    cout << str;
    return 0;
}