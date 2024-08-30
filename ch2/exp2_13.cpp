//
// 有一条长度为整数L （1 <L< 10000）的马路，可以将它想象为数轴上长度为L的一条线段，起
//点是坐标原点，在每个整数坐标点处有一棵树，即在0,1,2,…，乙共L+1个位置上有L+1棵树。
//现在要移走一些树，移走的树的区间用一对数字表示，如“100 200”表示移走从100到200
//之间（包括端点）的所有树。可能有"（1 <M< 100）个区间，区间之间可能有重叠。现在要
//求移走所有区间的树之后剩下的树的棵数。
//
#include "iostream"
#include "cstdio"

using namespace std;
/**
 * 暴力解法
 * @return
 */
int main(){
    int L, M;
    while(cin >> L >> M){
        int road[L + 1];
        for (int i = 0; i <= L; ++i) {
            road[i] = 1;
        }
        int start, end;
        for (int i = 0; i < M; ++i) {
            cin >> start >> end;
            for (int j = start; j <= end; ++j) {
                road[j] = 0;
            }
        }
        int sum = 0;
        for (int i = 0; i <= L; ++i) {
            sum += road[i];
        }
        cout << sum << endl;
    }
    return 0;
}