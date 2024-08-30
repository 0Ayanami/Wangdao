//
//题目描述：
//设a, b, c均是0到9之间的数字，abc, bcc是两个三位数，且有abc + bcc = 532。
//求满足条件的所有a,b,c的值。
//输入：
//题目没有任何输入。
//输出：
//请输出所有满足题目条件的a, b, c的值。
//a, b, c之间用空格隔开。
//每个输出占一行。
//
#include "cstdio"
#include "iostream"

using namespace std;

int main(){
    for (int a = 0; a < 10; ++a) {
        for (int b = 0; b < 10; ++b) {
            for (int c = 0; c < 10; ++c) {
                if(100 * a + 110 * b + 12 * c == 532)
                    cout << a << ' ' << b << ' ' << c;
//                    printf("%d %d %d\n", a, b, c);
            }
        }
    }
    return 0;
}