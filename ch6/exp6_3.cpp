/**
 #include<iostream>
#include<algorithm>

using namespace std;

由m进制转换成n进制
string conversion(string num, int m, int n){
    int l = num.size(), k = 0;
    string ans = "";
    for(int i = 0; i < l; ){
        k = 0;
        // k是 a/b 的余数，因为在 a/b 的过程中我们要不断更新商的值，所以要不断更新 num[j]
        // 单纯求余数的话我们 k * m + num[j] 计算若干次就够了
        for(int j = i; j < l; j ++){
            int t = (k * m + num[j] - '0') % n;
            num[j] = (k * m + num[j] - '0') / n + '0';
            k = t;
        }
        ans += (k + '0');
        // 如果 num[i] == 0 说明商在该位上没有值，比如 0001，那值就是 1，跳过去就好了
        while(num[i] == '0') i ++;
    }
    return ans;
}

int main(){
    string num;
    while (cin >> num){
        string temp = conversion(num, 10, 2);
        temp = conversion(temp, 2, 10);
        reverse(temp.begin(), temp.end());
        cout << temp << endl;
    }
}
**/
#include "iostream"
#include "string"

using namespace std;

int remain = 0;

string divide2(string num) {
    string result;
    remain = 0;
    if (num == "0") {
        result = "0";
    } else if (num == "1") {
        remain = 1;
        result = "0";
    } else {
        for (int i = 0; i < num.size(); ++i) {
            int n = num[i] - '0' + remain * 10;
            remain = n % 2;
            char c = char(n / 2 + '0');
            if (i == 0 && c == '0')
                continue;
            else
                result += c;
        }
    }
    return result;
}

string multiply2(string num) {
    string result;
    int adv = 0;
    for (int i = num.size() - 1; i >= 0; --i) {
        int n = (num[i] - '0') * 2 + adv;
        adv = n / 10;
        char c = n % 10 + '0';
        result = c + result;
    }
    if(adv > 0){
        char c = adv + '0';
        result = c + result;
    }
    return result;
}

string add1(string num){
    for (int i = num.size() - 1; i >= 0; --i) {
        int n = num[i] - '0' + 1;
        if(n == 10){
            num[i] = '0';
            if(i == 0){
                num = '1' + num;
            }
        }
        else{
            num[i] = n + '0';
            break;
        }
    }
    return num;
}

int main() {
    string num;
    while (cin >> num) {
        string binary = "";
        do {
            num = divide2(num);
            char rm = remain + '0';
            if (!binary.empty() || rm != '0')
                binary += rm;
        } while (num != "0");
        string sum = "0";
        for (int i = 0; i < binary.size(); ++i) {
            if(!sum.empty()){
                sum = multiply2(sum);
            }
            if(binary[i] == '1')
                sum = add1(sum);
        }
        cout << sum << endl;
    }
    return 0;
}