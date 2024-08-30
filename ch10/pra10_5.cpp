//
// Created by muyou on 2024/8/16.
//
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        string id, signIn, signOut;
        string openId, closeId;
        string signInTime = "24:00:00", signOutTime = "00:00:00";
        for(int i = 0; i < n; i ++){
            cin >> id >> signIn >> signOut;
            if(signIn < signInTime){
                signInTime = signIn; openId = id;
            }
            if(signOut > signOutTime){
                signOutTime = signOut; closeId = id;
            }
        }
        cout << openId << " " << closeId << endl;
    }
    return 0;
}