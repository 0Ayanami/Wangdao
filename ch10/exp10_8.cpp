//
// Created by muyou on 2024/8/16.
//
#include "iostream"
#include "string"
#include "map"
using namespace std;

int main(){
    map<string, string> myMap;
    string magic;
    while(getline(cin, magic)){
        if(magic == "@END@")
            break;
        int pos=magic.find("]");
        string key = magic.substr(1, pos - 1);
        string word = magic.substr(pos + 2);
        myMap["[" + key + "]"] = word;
        myMap[word] = key;
    }
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; ++i) {
        string str;
        getline(cin, str);
        if(myMap[str] == "")
            cout << "what?" << endl;
        else{
            cout << myMap[str] << endl;
        }
    }
    return 0;
}