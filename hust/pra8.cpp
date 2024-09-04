//
// Created by muyou on 2024/9/4.
//
#include <iostream>
#include <string>
#include<vector>
using namespace std;

int main() {
    vector<string>v;
    string str;
    int maxlen=0;
    int minlen=1001;
    while(getline(cin,str))
    {
        v.push_back(str);
        if(str.length()>maxlen)
        {
            maxlen=str.length();
        }
        if(str.length()<minlen)
        {
            minlen=str.length();
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i].length()==minlen)
            cout<<v[i]<<endl;

    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i].length()==maxlen)
        {
            cout<<v[i]<<endl;
        }
    }
    return 0;
}