//
// Created by muyou on 2024/8/13.
//
#include "iostream"
#include "string"
#include "queue"
#include "unordered_map"
using namespace std;

struct NewStr {
    string str;
    int step;

    NewStr(string s, int t) : str(s), step(t) {}
};

unordered_map<string, bool> visited;

void BFS(string s){
    queue<NewStr> myQueue;
    myQueue.push(NewStr(s,0));
    visited[s] = true;
    while(!myQueue.empty()){
        NewStr temp = myQueue.front();
            if(temp.str.find("2012") != string::npos){
                cout << temp.step<<endl;
                return ;
            }
            string str = temp.str;
            for (int i = 0; i < str.size() - 1; ++i) {
                swap(str[i], str[i+1]);
                if(!visited[str]){
                    visited[str] = true;
                    myQueue.push(NewStr(str, temp.step+1));
                }
                swap(str[i+1], str[i]);
            }
        myQueue.pop();
    }
    cout << -1 <<endl;
}

int main() {
    int n;
    string s;
    cin >> n >> s;
    BFS(s);
    return 0;
}