#include "iostream"
#include "algorithm"

using namespace std;

const int MAXN = 1000001;

bool comp(int a, int b) {
	return a > b;
}
int main() {
	int n, m;
	while (cin >> n >> m) {
		if(n == 0 && m == 0)
			break;
		int wealth[MAXN];
		for (int i = 0; i < n; ++i)
			cin >> wealth[i];
		sort(wealth, wealth + n, comp);
		for (int i = 0; i < m; ++i) {
			if(wealth[i] > 0) {
				if (i == 0)
					cout << wealth[i];
				else
					cout << " " << wealth[i];
			}else
				break;
		}
		cout << endl;
	}

	return 0;
}
