#include "iostream"
using namespace std;

int reverse(int a) {
	int temp = 0;
	while(a > 0) {
		temp = temp * 10 + (a % 10);
		a /= 10;
	}
	return temp;
}
int main() {
	int a,b;
	cin >> a >> b;
	if(reverse(a +b) == reverse(a) + reverse(b))
		cout << a + b << endl;
	else
		cout <<"NO" << endl;
	return 0;
}
