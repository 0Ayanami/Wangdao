//
//例题2.3对称平方数1 （清华大学复试上机题）
//题目描述：
//打印所有不超过256,其平方具有对称性质的数。如2和11就是这样的数，因为2x2 = 4,11x11 = 121。
//输入：
//题目没有任何输入。
//输出：
//输出具有题目要求的性质的数。如果输出数据不止一组，那么各组数据之间以回车隔开。
//
#include "iostream"

using namespace std;
int main(){
    for (int i = 0; i < 257; ++i) {
        int n = i * i;
        int m = 0;
        for (int tmp = n; tmp > 0;) {
            m = m * 10 + (tmp % 10);
            tmp /= 10;
        }
        if(m == n)
            cout << i << endl;
    }
    return 0;
}