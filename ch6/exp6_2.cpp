//
// Created by muyou on 2024/7/31.
//
#include "iostream"
#include "string"
#include "stack"

using namespace std;

int remainder = 0;
string divide2(string num) {
    string result;
    remainder = 0;
    if(num == "0"){
        result = "0";
    }else if(num == "1"){
        remainder = 1;
        result = "0";
    }else{
        for (int i = 0; i < num.size(); ++i) {
            int n = num[i] - '0' + remainder * 10;
            remainder = n % 2;
            char c = char(n / 2 + '0');
            if(i == 0 && c == '0')
                continue;
            else
                result += c;
        }
    }
    return result;
}

int main() {
    string num;
    while (cin >> num) {
        stack<int> binary;
        do{
            num = divide2(num);
            binary.push(remainder);
        }while(num != "0");
        while(!binary.empty()){
            cout << binary.top();
            binary.pop();
        }
        cout << endl;
    }
    return 0;
}