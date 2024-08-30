//
// Created by muyou on 2024/8/11.
//
#include "iostream"
#include "string"

using namespace std;

void fullsort(string pre, string str){
    if(str.size() == 1){
        cout << pre + str<<endl;
    } else{
        string nextpre = "";
        string nextstr = "";
        for (int i = 0; i < str.size(); ++i) {
            nextpre = pre + str[i];
            nextstr = str;
            nextstr.erase(i,1);
            fullsort(nextpre, nextstr);
        }
    }
}
int main(){
    string str;
    cin >> str;
    fullsort("", str);
    return 0;
}