//
// Created by muyou on 2024/7/29.
//
#include "iostream"
#include "string"

using namespace std;

int nextTable[10000];

void GetNextTable(string pattern) {
    int m = pattern.size();
    int j = 0;
    nextTable[j] = -1;
    int i = -1;
    while (j < m) {
        if (i == -1 || pattern[i] == pattern[j]) {
            i++;
            j++;
            nextTable[j] = i;
        } else {
            i = nextTable[i];
        }
    }
}

int KMP(string text, string pattern) {
    int m = pattern.size();
    int n = text.size();
    GetNextTable(pattern);
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (j == -1 || pattern[j] == text[i]) {
            i++;
            j++;
        } else {
            j = nextTable[j];
        }
    }
    if (j == m)
        return i - j + 1;
    else
        return -1;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string pattern, text;
        cin >> pattern >> text;
        cout << KMP(text, pattern) << endl;
    }
    return 0;
}