#include "iostream"

using namespace std;

const int MAXN = 1000001;

int main() {
	int a,b;
	cin >> a >> b;
	int arr1[MAXN], arr2[MAXN];
	for(int i = 0; i < a; ++i)
		cin >> arr1[i];
	for(int i = 0; i < b; ++i)
		cin >> arr2[i];
	int arr[MAXN];
	int c, d, i = 0;
	cin >> c >> d;
	for(int j = c - 1; j < d; ++j, ++i) {
		arr[i] = arr1[j];
	}
	cin >> c >> d;
	for(int j = c - 1; j < d; ++j, ++i)
		arr[i] = arr2[j];
	cout << arr[(i - 1) / 2] << endl;
	return 0;
}
