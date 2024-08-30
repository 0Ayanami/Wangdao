//
// Created by muyou on 2024/8/14.
//
#include "iostream"
#include "queue"
#include "cstdio"

using namespace std;

struct Complex {
    int real;
    int imag;

    Complex(int a, int b) : real(a), imag(b) {}

    bool operator<(Complex c) const {
        return real * real + imag * imag < c.real * c.real + c.imag * c.imag;
    }
};

int main() {
    int n;
    priority_queue<Complex> myQueue;
    while (n--) {
        string ope;
        cin >> ope;
        if (ope == "Pop") {
            if (myQueue.empty())
                cout << "empty" << endl;
            else {
                Complex current = myQueue.top();
                myQueue.pop();
                cout << current.real << "+i" << current.imag << endl;
                cout << "SIZE = " << myQueue.size() << endl;
            }
        } else if (ope == "Insert") {
            int a, b;
            scanf("%d+i%d", &a, &b);
            myQueue.push(Complex(a, b));
            cout << "SIZE = " << myQueue.size() << endl;
        }
    }
    return 0;
}