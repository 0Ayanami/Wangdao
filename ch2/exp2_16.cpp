//
// Created by muyou on 2024/7/18.
//
#include "iostream"
#include "math.h"
#include "cstdio"

using namespace std;

int main(){
    int P, T;
    while (cin >> P >> T){
        float G1 ,G2, G3, Gj;
        cin >> G1 >> G2 >> G3 >> Gj;
        float conse = 0;
        if(abs(G1 - G2) <= T){
            conse = (G1 + G2) / 2;
        }
        else{
            if(abs(G3 - G1) <= T && abs(G3 - G2) <=T){
                conse = max(max(G1, G2), G3);
            } else if(abs(G3 - G1) <= T){
                conse = (G1 + G3) / 2;
            }else if(abs(G3 - G2) <=T){
                conse = (G2 + G3) / 2;
            } else{
                conse = Gj;
            }
        }
        printf("%.1f\n", conse);
    }
    return 0;
}