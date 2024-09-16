#include "iostream"
using namespace std;

void count(int a, int b, char c) {
	if(c == '+')
		cout << a + b << endl;
	else if(c =='-')
		cout << a - b << endl;
	else if(c == '*')
		cout << a * b << endl;
	else if(c == '/') {
		if(b == 0)
			cout << "error" << endl;
		else
			cout << a / b <<endl;
	} else if(c =='%') {
		if(b == 0)
			cout << "error"<<endl;
		else
			cout << a % b<<endl;
	}
}
int main() {
	int a,b;
	char c;
	while(scanf("%d %c", &a, &c) != EOF) {
		if(c != '!'){
			scanf("%d", &b);
			count(a,b,c);
		}else{
			int sum = 1;
			for(int i = 1; i <= a; i++){
				sum *= i;
			}
			cout << sum <<endl;
		}
	}
	return 0;
}
