//
// Created by muyou on 2024/7/29.
//
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

const int MAXN = 1000;
const int MAXM = 100;

string text[MAXN];
string pattern[MAXM];
int Next[MAXM];
int n, m;

char lower(char c) {
    if(c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
    return c;
}

string lower(string s) {
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] - 'A' + 'a';
    }
    return s;
}

bool equalC(string s1, string s2) {
    // 两个集合有相同的元素
    s1 = lower(s1);
    s2 = lower(s2);
    for(int i = 0; i < s1.size(); ++i) {
        if(s2.find(string(1, s1[i])) != string::npos) return true;
    }
    return false;
}

bool equalS(string s1, string s2) {
    // s2元素全在s1里面
    s1 = lower(s1);
    s2 = lower(s2);
    for(int i = 0; i < s2.size(); ++i) {
        if(s1.find(string(1, s2[i])) == string::npos) return false;
    }
    return true;
}

bool equalC(char c, string s) {
    // c在s里面
    c = lower(c);
    s = lower(s);
    if(s.find(string(1, c)) != string::npos) return true;
    return false;
}

void getPattern(string str) {
    m = 0;
    for(int i = 0; i < str.size(); ++i, ++m) {
        if(str[i] == '[') {
            int j = i;
            while(str[i] != ']') i++;
            pattern[m] = str.substr(j + 1, i - j - 1);
        } else
            pattern[m] = str.substr(i, 1);
    }
    return;
}

void getNext() {
    memset(Next, -1, sizeof(Next));
    for(int i = 1, j = Next[0]; i < m; ++i, ++j) {
        while(j != -1 && !equalC(pattern[i - 1], pattern[j])) j = Next[j];
        Next[i] = equalS(pattern[i], pattern[j + 1]) ? Next[j + 1] : (j + 1);
    }
    return;
}

vector<int> KMP() {
    vector<int> r;
    bool find = false;
    for(int i = 0; !find && i < n; ++i) {
        int length_text = text[i].size();
        for(int k = 0, l = 0; !find && k < length_text; ) {
            if(equalC(text[i][k], pattern[l])) {
                k++;
                l++;
                if(l == m) find = true;
            } else if(Next[l] == -1) {
                k++;
                l = 0;
            } else
                l = Next[l];
        }
        if(find) r.push_back(i);
        find = false;
    }
    return r;
}

int main()
{
    while(cin >> n) {
        for(int i = 0; i < n; ++i) cin >> text[i];
        string str;
        cin >> str;
        getPattern(str);
        getNext();
        vector<int> r = KMP();
        for(int i = 0; i < r.size(); ++i) cout << r[i] + 1 << " " << text[r[i]] << endl;
    }
    return 0;
}