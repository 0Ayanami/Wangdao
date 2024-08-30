//
// Created by muyou on 2024/7/29.
//
#include "iostream"
#include "queue"

using namespace std;
struct animal {
    int order;
    int number;
};

int main() {
    int n;
    cin >> n;
    int order = 0;
    queue<animal> dogs;
    queue<animal> cats;
    while (n--) {
        int m, t;
        cin >> m >> t;
        if (m == 1) {
            if (t > 0) {
                animal temp;
                temp.number = t;
                temp.order = order++;
                dogs.push(temp);
            } else if (t < 0) {
                animal temp;
                temp.number = t;
                temp.order = order++;
                cats.push(temp);
            }
        } else if (m == 2) {
            if (t == 0 && !dogs.empty() && !cats.empty()) {
                if (dogs.front().order < cats.front().order) {
                    cout << dogs.front().number;
                    dogs.pop();
                } else {
                    cout << cats.front().number;
                    cats.pop();
                }
            } else if (t == 1) {
                cout << dogs.front().number;
                dogs.pop();
            } else if (t == -1) {
                cout << cats.front().number;
                cats.pop();
            }
        }
    }
    return 0;
}