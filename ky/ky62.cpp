#include "iostream"

using namespace std;

int main() {
    double n, k;
    while (cin >> n >> k) {
        double inc = (100 + k) / 100;
        double house = 200;
        double salary = n;
        bool flag = false;
        int i = 0;
        for (; i < 21; ++i) {
            if (salary >= house) {
                flag = true;
                break;
            }
            salary = salary + n;
            house = house * inc;
        }
        if (flag) {
            cout << i + 1 << endl;
        } else {
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
