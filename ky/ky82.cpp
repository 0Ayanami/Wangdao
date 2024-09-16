#include "iostream"
#include "algorithm"

using namespace std;

bool comp(string a, string b) {
	return a.size() < b.size();
}

int main() {
	int n;
	while(cin >> n) {
		string words[n];
        getchar();
        int i = 0;
		for(; i < n; ++i) {
			string tmp;
			getline(cin, tmp);
			if(tmp == "stop")
				break;
			words[i] = tmp;
		}
		sort(words, words+i, comp);
		for(int j = 0; j < i; ++j)
			cout << words[j] << endl;
	}
	return 0;
}

