#include<iostream>
using namespace std;
int daytab[2][13]= {
	{0,31,28,31,30,31,30,31,31,30,31,30,31},
	{0,31,29,31,30,31,30,31,31,30,31,30,31}
};
bool isLeapYear(int year) {
	if(year%100!=0&&year%4==0||year%400==0)
		return true;
	return false;
}
char a[9],b[9];
int main() {
	//n为第一个日期相对于0000 00 00的差值，n1为为第二个的差值
	int year,month,day,year1,month1,day1,n,n1;
	while(cin>>a>>b) {
		n=n1=0;
		sscanf(a,"%4d%2d%2d",&year,&month,&day);//格式化读入
		sscanf(b,"%4d%2d%2d",&year1,&month1,&day1);
		for(int i=0; i<=year; i++) { //记录年差值
			if(isLeapYear(i)) {
				n+=366;
			} else n+=365;
		}
		for(int i=1; i<month; i++) { //记录月差值
			n+=daytab[isLeapYear(year)][i];
		}
		n+=day;//记录日差值
		for(int i=0; i<=year1; i++) {
			if(isLeapYear(i)) {
				n1+=366;
			} else n1+=365;
		}
		for(int i=1; i<month1; i++) {
			n1+=daytab[isLeapYear(year1)][i];
		}
		n1+=day1;
		cout<<abs(n-n1)+1<<endl;//差值相减取绝对值+1即可
	}
	return 0;
}
