//
// 一个正整数，如果它能被7整除，或者它的十进制表示法中某个位数上的数字为7,那么称其为
//与7相关的数。现求所有小于等于n（n<100）的与7无关的正整数的平方和。
//
#include "iostream"

using namespace std;

bool relateTo7(int n){
    if (n % 7 == 0)
        return true;
    for (int i = n; i > 0;) {
        if(i % 10 == 7)
            return true;
        else
            i /= 10;
    }
    return false;
}

int main(){
    int sum = 0;
    int n = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (!relateTo7(i))
            sum += i * i;
    }
    cout << sum;
    return 0;
}