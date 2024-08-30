//
//习题2.2百鸡问题（哈尔滨工业大学复试上机题）
//用小于等于n元去买100只鸡，大鸡5元/只，小鸡3元/只，还有1/3元每只的一种小鸡，分别
//记为x只、y只和z只。编程求解x,y,z所有可能的解。
//
#include "iostream"

using namespace std;

int main(){
    int n;
    cin >> n;
    for (float i = 0; i <= 100; ++i) {
        for (float j = 0; j <= 100 - i; ++j) {
            if(i * 5 + j * 3 + (100 - i - j) / 3 <= n)
                cout << "x="<< i << ",y=" << j << ",z=" << (100- i-j) << endl;
        }
    }
    return 0;
}