#include "iostream"
#include "algorithm"
#include <string>

using namespace std;

bool comp(char a, char b) {
    if (a >= 'A' && a <= 'Z')
        a += ('a' - 'A');
    if (b >= 'A' && b <= 'Z')
        b += ('a' - 'A');
    return a < b;
}
int main() {
    string ori;
    while(getline(cin, ori)){
    string alp;
    for (int i = 0; i < ori.size(); ++i) {
        if ((ori[i] >= 'a' && ori[i] <= 'z') || (ori[i] >= 'A' && ori[i] <= 'Z')) {
            alp += ori[i];
        }
    }
    stable_sort(alp.begin(), alp.end(), comp);
    for (int i = 0; i < ori.size(); ++i) {
        if (!(ori[i] >= 'a' && ori[i] <= 'z') && !(ori[i] >= 'A' && ori[i] <= 'Z')) {
            alp.insert(alp.begin() + i, ori[i]);
        }
    }
    cout << alp << endl;
    }
    return 0;
}