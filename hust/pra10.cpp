//
// Created by muyou on 2024/9/4.
//
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> link;
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        link.push_back(temp);
    }
    sort(link.begin(), link.end());
    for (int i = 0; i < link.size(); ++i) {
        if(i!=0)
            cout << " ";
        cout << link[i];
    }
    cout << endl;
    return 0;
}