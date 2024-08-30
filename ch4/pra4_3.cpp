//
// Created by muyou on 2024/7/28.
//
#include "iostream"
#include "string"

using namespace std;

int main() {
    string words;
    getline(cin, words);
    bool isWord = true;
    for (int i = 0; i < words.size(); ++i) {
        if (words[i] == ' ' || words[i] == '\t' || words[i] == '\n' || words[i] == '\r' || words[i] == '\0') {
            isWord = true;
        } else if (isWord) {
            isWord = false;
            if (words[i] >= 'a' && words[i] <= 'z')
                words[i] -= 32;
        }
    }
    cout << words;
    return 0;
}