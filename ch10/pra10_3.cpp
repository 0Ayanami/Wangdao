//
// Created by muyou on 2024/8/16.
//
#include "iostream"
#include "queue"

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        if (n == 0)
            break;
        priority_queue<long long, vector<long long>, greater<long long>> myQueue;
        for (int i = 0; i < n; ++i) {
            long long temp;
            cin >> temp;
            myQueue.push(temp);
        }
        long long answer = 0;
        for (int i = 0; i < n - 1; ++i) {
            long long x = myQueue.top();
            myQueue.pop();
            long long y = myQueue.top();
            myQueue.pop();
            answer += (x + y);
            myQueue.push(x + y);
        }
        cout << answer << endl;
    }
    return 0;
}