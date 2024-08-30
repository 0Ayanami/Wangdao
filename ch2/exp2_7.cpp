/**
给你一个仅包含一种字符和空格的模板，模板显示如何创建无尽的图片，
 将字符用作基本元素并将它们放在正确的位置以形成更大的模板，然后不断进行该操作。
**/
#include <bits/stdc++.h>
using namespace std;

int N;
char origin[7][7];
char pic[3005][3005];

void draw(int Q,int x,int y){
    if(Q==1){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                pic[x+i][y+j] = origin[i][j];
            }
        }
    }
    else{
        int size = pow(N,Q-1);
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(origin[i][j]!=' '){
                    draw(Q-1,x+i*size,y+j*size);
                }
            }
        }
    }
}

int main(){
    while(cin >> N){
        if(N==0){
            break;
        }
        getchar();
//        for(int i=0;i<3005;i++){
//            for(int j=0;j<3005;j++){
//                pic[i][j]=' ';
//            }
//        }
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                origin[i][j] = getchar();
            }
            getchar();
        }
        int Q;
        scanf("%d",&Q);
        int length = (int) pow(N,Q);
        draw(Q,0,0);
        for(int i=0;i<length;i++){
            for(int j=0;j<length;j++){
                cout<<pic[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}