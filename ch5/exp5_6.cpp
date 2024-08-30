//
// Created by muyou on 2024/7/29.
//
#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <stack>

using namespace std;

int Priority(char c){
    if (c == '#'){
        return 0;
    }else if (c == '$'){
        return 1;
    }else if (c == '+'|| c == '-'){
        return 2;
    }else{
        return 3;
    }
}

double GetNumber(string str,int& index){//int& 为引用型，可以改变传递过来的参数本身的值，它们指向同一地址
    double number = 0;
    while(isdigit(str[index])){
        number = number*10 + str[index]-'0';//注意char转为int
        index++;
    }
    return number;
}

double Calculate(double x,double y,char op){
    double result = 0;
    if(op=='+'){
        result= x+y;
    }else if(op=='-'){
        result= x-y;
    }else if(op=='*'){
        result= x*y;
    }else if(op=='/'){
        result= x/y;
    }
    return result;
}

int main(){
    string str;
    while(getline(cin,str)){
        if(str == "0"){
            break;
        }
        int index = 0;
        stack<char> oper;
        stack<double> data;
        str += "$";
        oper.push('#');
        while(index < str.size()){
            if(str[index]==' '){
                index++;
            }else if(isdigit(str[index])){
                data.push(GetNumber(str,index));//注意这里不用自增，在函数中已经自增
            }else{
                if(Priority(str[index])>Priority(oper.top())){
                    oper.push(str[index++]);
                }else{
                    double y = data.top();
                    data.pop();
                    double x = data.top();
                    data.pop();
                    data.push(Calculate(x,y,oper.top()));
                    oper.pop();
                }
            }
        }
        printf("%.2f\n",data.top());
    }
    return 0;
}
