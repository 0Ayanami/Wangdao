//
//反序数 （清华大学复试上机题）
//题目描述：
//设N是一个4位数，它的9倍恰好是其反序数（如1234的反序数是4321）,求N的值。
//输入：
//题目没有任何输入。
//输出：
//输出题目要求的4位数，如果结果有多组，那么每组结果之间以回车隔开。
//
#include "iostream"
using namespace std;

int main(){
    for (int n = 1000; n < 1112; ++n) {
        int m = 0;
        for (int tmp = n; tmp > 0;) {
            m = m * 10 + (tmp % 10);
            tmp /= 10;
        }
        if (m == n * 9)
            cout << n;
    }
    return 0;
}