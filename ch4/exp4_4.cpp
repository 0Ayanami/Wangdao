//
// Created by muyou on 2024/7/25.
//
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>

using namespace std;

int number[128];

int main()
{
    string str1,str2;
    while(getline(cin,str1))
    {
        if(str1=="#")
        {
            break;
        }
        getline(cin,str2);
        for(int i=0;i<str2.size();i++)
        {
            number[str2[i]]++;
        }
        for(int i=0;i<str1.size();i++){
            printf("%c %d\n",str1[i],number[str1[i]]);
        }
    }
    return 0;
}