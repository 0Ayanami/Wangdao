//
// Created by muyou on 2024/9/14.
//
#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

struct Node {
    string s;
    string name;
    string start1;
    string start2;
    double ti;
};

int cmp(Node a, Node b) {
    if (a.ti != b.ti)
        return a.ti < b.ti;
    else if (a.start1 != b.start1)
        return a.start1 < b.start1;
    else
        return a.start2 < b.start2;
}

int main() {
    Node n[10001];
    int i = 0;
    while (getline(cin, n[i].s) && n[i].s.size()) {
        int j = 0;
        for (j = 0; j < n[i].s.size(); ++j) {
            if(n[i].s[j] == ' ')
                break;
            n[i].name = n[i].name + n[i].s[j];
        }
        do{
            j++;
        }while(n[i].s[j] == ' ');

        for (; j < n[i].s.size(); ++j) {
            if(n[i].s[j] == ' ')
                break;
            n[i].start1 = n[i].start1 + n[i].s[j];
        }
        j++;
        for (; j < n[i].s.size(); ++j) {
            if(n[i].s[j] == ' ')
                break;
            n[i].start2 = n[i].start2 + n[i].s[j];
        }
        do{
            j++;
        }while(n[i].s[j] == ' ');

        n[i].ti = 0;
        for (; j < n[i].s.size(); ++j) {
            if(n[i].s[j] == '.')
                break;
            n[i].ti = n[i].ti * 10 + (double)(n[i].s[j] - '0');
        }
        double tmp = 0.1;
        for (j = j + 1; j < n[i].s.size(); ++j) {
            if(n[i].s[j] == '(')
                break;
            n[i].ti = n[i].ti + (double)(n[i].s[j] - '0') * tmp;
            tmp /= 10;
        }
        i++;
    }
    sort(n, n + i, cmp);
    for (int j = 0; j < i; j++)
        cout << n[j].s << endl;
    return 0;
}





