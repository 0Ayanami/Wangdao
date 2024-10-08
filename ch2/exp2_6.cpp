//
// N只火鸡的价格为$_xyz_,火鸡的总数N在1到99之间。价格由五位数组成，两
//边的数字由于褪色而看不清，所以只能看到中间的三位数。假设第一个数字非零，每只火鸡的
//价格是整数，并且所有火鸡的价格相同。给定N,X,Y和Z,编写一个程序来猜测两边褪色的数字
//和火鸡的原始价格。如果有多个价格符合题意，那么输出最昂贵的那个。
//
#include<iostream>
using namespace std;
int main(){
    int n,x,y,z;
    int price=0;    //要输出的单价
    while(cin>>n>>x>>y>>z){
        for(int i=9;i>0;i--){    //i是最高位，j是最低位，分别从9往下循环
            for(int j=9;j>=0;j--){
                if((i*10000+x*1000+y*100+z*10+j)%n==0){//确保单价是整数
                    price=(i*10000+x*1000+y*100+z*10+j)/n;
                    cout<<i<<' '<<j<<' '<<price<<endl;
                    i=-1;   //因为输出的一定是最大值，因此设置-1跳出循环
                    j=-1;
                    price=0;    //并设置单价归0
                }
                if(i==1&&j==0) cout<<0<<endl;   // 如果找不到任何一组满足要求的就输出0
            }
        }
    }
    return 0;
}