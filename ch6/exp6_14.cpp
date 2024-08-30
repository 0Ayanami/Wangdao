//
// Created by muyou on 2024/8/8.
//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//大数加法
string addString(string a,string b)
{
    int carry=0;
    string res;
    int i=a.size()-1;
    int j=b.size()-1;
    while(i>=0 && j>=0)
    {
        int num=carry+a[i]-'0'+b[j]-'0';
        res+=num%10+'0';
        carry=num/10;
        i--;j--;
    }
    while(i>=0)
    {
        int num=carry+a[i]-'0';
        res+=num%10+'0';
        carry=num/10;
        i--;
    }
    while(j>=0)
    {
        int num=carry+b[j]-'0';
        res+=num%10+'0';
        carry=num/10;
        j--;
    }
    if(carry>0)
        res+=to_string(carry);
    reverse(res.begin(),res.end());
    return res;
}
//大数乘法(x<=10)
string mulString(string a,int x)
{
    int carry=0;
    string res;
    for(int i=a.size()-1;i>=0;i--)
    {
        int num=carry+(a[i]-'0')*x;
        res+=num%10+'0';
        carry=num/10;
    }
    if(carry>0)
        res+=to_string(carry);
    reverse(res.begin(),res.end());
    return res;
}
//组合大数乘法
string MulString(string a,string b)
{
    string res;
    for(int i=0;i<b.size();i++)
    {
        int x=b[b.size()-1-i]-'0';
        string num=mulString(a,x);
        for(int j=0;j<i;j++)
            num=mulString(num,10);
        res=addString(res,num);
    }
    return res;
}
int main()
{
    int n;
    while(cin>>n)
    {
        string res="1";
        for(int i=2;i<=n;i++)
        {
            res=MulString(res,to_string(i));
        }
        cout<<res<<endl;
    }
    return 0;
}