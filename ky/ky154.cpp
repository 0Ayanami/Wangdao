#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

const int MAXN = 1001;

struct Student {
	string no;
	int sum;
	int grade;
	int arr[11];
	Student() {};
};

bool comp(Student a, Student b) {
	if(a.grade != b.grade)
		return a.grade > b.grade;
	else
		return a.no < b.no;
}
int main() {
	int n,m,g;
	while(cin >> n >>m >>g) {
		if(n == 0)
			break;
		int score[11];
		vector<Student> stu;

		for(int i = 1; i <= m; ++i)
			cin >> score[i];
		for(int i = 0; i <n; ++i) {
			Student s;
			cin >> s.no >> s.sum;
			s.grade = 0;
			for(int k = 0; k < s.sum; ++k) {
				cin >> s.arr[k];
				s.grade += score[s.arr[k]];
			}
			if(s.grade >= g)
				stu.push_back(s);
		}
		sort(stu.begin(), stu.end(), comp);
		cout << stu.size() << endl;
		for(int i = 0; i < stu.size(); ++i) {
			cout << stu[i].no << " " << stu[i].grade << endl;
		}
	}
	return 0;
}
