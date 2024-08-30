//
// Created by muyou on 2024/7/25.
//
#include "iostream"
#include "string"

using namespace std;

int main(){
    string str1, str2,str;
    while(getline(cin, str1)){
        if (str1 == "ENDOFINPUT")
            break;
        getline(cin, str);
        for (int i = 0; i < str.size(); ++i) {
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = (str[i] - 'A' - 5 + 26) % 26 + 'A';
        }
        cout << str << endl;
        getline(cin, str2);
    }
    return 0;
}