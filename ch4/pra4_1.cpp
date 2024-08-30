//
// Created by muyou on 2024/7/25.
//
#include "iostream"
#include "string"
#include "math.h"
using namespace std;

int main(){
    string str;
    while (getline(cin, str)){
        int skew = 0;
        for (int i = 0; i < str.size(); ++i) {
            if(str[i] != '0'){
                skew+= (str[i] - '0') * ((pow(2, str.size()-i)) - 1);
            }
        }
        cout << skew << endl;
    }
    return 0;
}