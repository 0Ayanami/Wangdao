//
// Created by muyou on 2024/8/8.
//
#include "iostream"

using namespace std;

int main() {
    int n;
    while(cin >> n) {
        int most = 0, least = 0;
        if (n % 2 == 0) {
            least = (n % 4 / 2) + n / 4;
            most = n / 2;
        }
        cout << least << " " << most << endl;
    }
}