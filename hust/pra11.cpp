//
// Created by muyou on 2024/9/4.
//
#include "iostream"
#include "string"

using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        int count = 0;
        for (int i = 0; i < s.size(); ++i) {
            if((s[i] >= 'a' && s[i] <= 'z')||(s[i] >= 'A' && s[i] <= 'Z'))
                count++;
            else{
                cout << count << " ";
                count = 0;
                continue;
            }
        }
        cout <<endl;
    }
    return 0;
}