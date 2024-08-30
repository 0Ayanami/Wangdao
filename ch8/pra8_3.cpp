//
// Created by muyou on 2024/8/11.
//
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void pow2(int n)
{
    if(n==1) //这里的 1代表2的1次幂
        cout<<"2";
    else if(n==2)  //2代表2的2次幂
        cout<<"2(2)";
    else if(n==0)
        cout<<"2(0)"; //0代表2的0次幂
    else  //2的高次幂可以由 0，1，2来组合表示
    {
        string res;
        while(n)
        {
            res+=n%2+'0';
            n/=2;
        }
        //cout<<res<<endl;   //转换成二进制后的结果（逆序）
        int index;
        while((index=res.rfind("1"))!=string::npos)  //从后往前查找
        {
            if(index>2) //为什么要以2为分界点呢？因为二次幂以下都可以直接表示，但是3次幂就要组合表示。所以输出格式有所变化。
            {
                cout<<"2(";
                pow2(index);//在这里递归输出
                res[index]='0';
                cout<<")";
                if((index=res.rfind("1"))!=string::npos) //最后一个加号不用输出
                    cout<<"+";
            }
            else
            {
                pow2(index);
                res[index]='0';
                if((index=res.rfind("1"))!=string::npos)
                    cout<<"+";
            }
        }
    }
}
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==1)
            cout<<"2(0)";
        else if(n==2)
            cout<<"2";
        else if(n==0)
            cout<<"0";
        else
            pow2(n);
        cout<<endl;
    }
    return 0;
}