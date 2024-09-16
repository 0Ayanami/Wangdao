#include "iostream"
#include "cstdio"
using namespace std;

const int MAXN = 11;

int score[MAXN];

double gradeToGPA(int g) {
	if(g >= 90 && g <=100) {
		return 4.0;
	} else if(g >= 85 && g <= 89) {
		return 3.7;
	} else if(g >= 82 && g<= 84) {
		return 3.3;
	} else if(g >= 78 && g <= 81) {
		return 3.0;
	} else if(g <= 77 && g >= 75) {
		return 2.7;
	} else if(g >= 72 && g <= 74) {
		return 2.3;
	} else if(g >= 68 && g <= 71) {
		return 2.0;
	} else if(g >= 64 && g <= 67) {
		return 1.5;
	} else if(g >= 60 && g <= 63) {
		return 1.0;
	} else if(g < 60)
		return 0;
}
int main() {
	int n;
	cin >> n;
	double sum = 0, sumgrade = 0;
	for(int i = 0; i < n; ++i) {
		cin >> score[i];
		sum += score[i];
	}
	for(int i = 0; i< n; ++i) {
		int grade;
		cin >> grade;
		sumgrade += gradeToGPA(grade) * score[i];
	}
	double GPA = sumgrade / sum;
	printf("%.2f", GPA);
	return 0;
}
