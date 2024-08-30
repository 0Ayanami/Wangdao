//
// Created by muyou on 2024/7/29.
//
#include "iostream"
#include "queue"

using namespace std;

int main() {

    int n, p, m;
    while (cin >> n >> p >> m) {
        if (n == 0 && p == 0 && m == 0)
            break;
        queue<int> kids;
        for (int i = 1; i <= n; ++i) {
            kids.push(i);
        }
        for (int i = 1; i < p; ++i) {
            kids.push(kids.front());
            kids.pop();
        }
        while(!kids.empty()){
            for (int i = 1; i < m; ++i) {
                kids.push(kids.front());
                kids.pop();
            }
            if(kids.size() == 1)
                cout << kids.front() << endl;
            else
                cout << kids.front() << ",";
            kids.pop();
        }
    }


    return 0;
}