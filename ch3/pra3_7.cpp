//
// Created by muyou on 2024/7/25.
//
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>

using namespace std;

vector<int> arr[128];
bool visited[128];

void Init(string str) {//将字符串所有字符统计一遍
    for(int i=0; i<str.size(); i++) {
        arr[str[i]].push_back(i);
    }
}

int main() {
    string str;
    while(cin>>str) {
        memset(arr,0,sizeof(arr));
        memset(visited,false,sizeof(visited));//初始化为没访问过
        Init(str);

        for(int i=0;i<str.size();i++){//遍历字符串 （为了按字符串出现顺序输出）
            if(!visited[str[i]]&&arr[str[i]].size()>1){//如果是没有访问过的字符 且 是重复的字符
                for(int j=0;j<arr[str[i]].size();j++){
                    if(j==0){    //输出控制
                        printf("%c:%d",str[i],arr[str[i]][j]);
                    }else {
                        printf(",%c:%d",str[i],arr[str[i]][j]);
                    }
                }
                printf("\n");
                visited[str[i]]=true; //置访问过
            }
        }
    }
    return 0;
}