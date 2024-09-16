#include "iostream"

using namespace std;

const int MAXN = 5;
int main() {
	int a;
	int num[MAXN];
	int sum = 0;
	cin >> a;
	for(int i =0; i < 5; ++i){
		cin >> num[i];
		if(num[i] < a)
			sum += num[i];
	}
	cout << sum << endl;
	return 0;
}
