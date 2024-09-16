#include "iostream"
#include "algorithm"

using namespace std;

const int MAXN = 30;

bool comp(char a, char b){
	return a < b;
}
int main(){
	string str;
	cin >> str;
	sort(str.begin(), str.end(), comp);
	cout << str << endl;

	return 0;
}
