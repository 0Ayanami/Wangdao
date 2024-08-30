//
// Created by muyou on 2024/7/29.
//
#include<iostream>
#include<stack>
#include<string>
using namespace std;
int getleval(char op){
    if(op=='*'||op=='/'){
        return 3;
    }else if(op=='+'||op=='-'){
        return 2;
    }else if(op=='$'){
        return 1;
    }else return 0;
}
float compute(float x,float y,char op){
    if(op=='*'){
        return x*y;
    }else if(op=='/'){
        return x/y;
    }else if(op=='+'){
        return x+y;
    }else return x-y;
}
int main(){
    string s;
    stack<float> num;
    stack<char> op;
    op.push('#');
    while(cin>>s){
        s+='$';
        int i=0;
        while(i<s.size()){
            if(s[i]>='0'&&s[i]<='9'){
                float res=0;
                while(s[i]>='0'&&s[i]<='9'){
                    res=res*10+s[i]-'0';
                    i++;
                }num.push(res);
            }else{
                if(getleval(op.top())<getleval(s[i])){
                    op.push(s[i++]);
                }else{
                    char o=op.top();
                    op.pop();
                    float num2=num.top();
                    num.pop();
                    float num1=num.top();
                    num.pop();
                    num1=compute(num1,num2,o);
                    num.push(num1);
                }
            }
        }cout<<num.top()<<endl;
        num.pop();op.pop();
    }
    return 0;
}