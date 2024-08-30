//
// Created by muyou on 2024/7/28.
//
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string ADD(string a, string b, int& carry);
void split(string number, string& zhengshu, string& xiaoshu)
{ //找到小数点，返回整数部分和小数部分
    int index = number.find('.');
    zhengshu = number.substr(0, index);
    xiaoshu = number.substr(index + 1, number.size() - 1 - index);
}

string xiaoshu_ADD(string a, string b, int& carry)
{//小数加法，在后面补0
    int size = max(a.size(), b.size());
    while ((int)a.size() < size)
    {
        a = a + "0";
    }
    while ((int)b.size() < size)
    {
        b = b + "0";
    }
    string result = ADD(a, b, carry);
    return result;
}

string zhengshu_ADD(string a, string b, int& carry)
{//整数加法，在前面补0
    int size = max(a.size(), b.size());
    while ((int)a.size() < size)
    {
        a = "0" + a;
    }
    while ((int)b.size() < size)
    {
        b = "0" + b;
    }
    string result = ADD(a, b, carry);
    if (carry != 0)
    {//最后一个进位如果不为0,拼在整数结果最前面
        result = (char)(carry + '0') + result;
    }
    return result;
}
string ADD(string a, string b, int& carry)
{
    //实现已经对齐的两个数进行加法操作 ,a.size()已经等于b.size()
    int size = a.size();
    string result = "";
    for (int i = size - 1; i >= 0; i--)
    {
        //char '2' 转 int 2 是 '2'-'0',
        //int 2 转char'2' 是'0'+2
        int a_int = (int)(a[i] - '0');
        int b_int = (int)(b[i] - '0');
        //carry是进位
        int add = a_int + b_int + carry;
        carry = add / 10;
        int add_mod = add % 10;
        result = (char)(add_mod + '0') + result;
    }
    return result;

}

int main()
{
    //三个问题
    // 1：为什么拆分成整数和小数部分，因为他们补0的方法不一样
    // 2: 实现小数加
    // 3: 实现整数加
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    string zs_a, xs_a, zs_b, xs_b;
    //1：得到整数部分和小数部分
    split(a, zs_a, xs_a);
    split(b, zs_b, xs_b);
    int carry = 0;
    //2：小数加法
    string xs_result = xiaoshu_ADD(xs_a, xs_b, carry);
    //3: 整数加法
    string zs_result = zhengshu_ADD(zs_a, zs_b, carry);
    //4：整数和小数拼接起来
    string result = zs_result + "." + xs_result;
    cout << result;
}