//
// Created by muyou on 2024/8/14.
//
#include "iostream"
#include "queue"

using namespace std;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        priority_queue<int, vector<int>, greater<int> > myPriorityQueue;
        while (n--) {
            int x;
            scanf("%d", &x);
            myPriorityQueue.push(x);
        }
        int answer = 0;
        while (1 < myPriorityQueue.size()) {
            int a = myPriorityQueue.top();
            myPriorityQueue.pop();
            int b = myPriorityQueue.top();
            myPriorityQueue.pop();
            answer += a + b;
            myPriorityQueue.push(a + b);
        }
        printf("%d\n", answer);
    }
    return 0;
}