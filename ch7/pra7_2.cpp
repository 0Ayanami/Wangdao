//
// Created by muyou on 2024/8/10.
//
#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

struct GasStation {
    double price;
    int distance;
};

bool ComparePrice(GasStation x, GasStation y) {
    return x.price < y.price;
}

int main() {
    int cmax, d, davg, n;
    while (cin >> cmax >> d >> davg >> n) {
        double currentprice = 0; // 当前油费

        bool tag[d + 1]; // 记录当前有哪段道路是从加油站出发能走的
        GasStation gasStation[n];

        for (int i = 1; i <= d; ++i) tag[i] = false;
        for (int i = 0; i < n; ++i) cin >> gasStation[i].price >> gasStation[i].distance;

        sort(gasStation, gasStation + n, ComparePrice); // 对油价按升序排

        for (int i = 0; i < n; ++i) {  // 对tag[]进行记录, 并同时计算出 currentprice
            int currentdistance = 0; // 记录从这个加油站出发要用其油的距离
            for (int j = gasStation[i].distance + 1; j <= gasStation[i].distance + cmax * davg; ++j) {
                if (tag[j] == false) { // 如果 tag[j]为假则可走
                    tag[j] = true;
                    currentdistance++;
                }
                if (j == d || j == gasStation[i].distance + cmax * davg) { // 走到了尽头
                    currentprice += gasStation[i].price  * currentdistance / (davg * 1.0);
                    break;
                }
            }
        }

        int fill = 1; // tag[]是否全为真的标志位
        double journey = 0;
        for (int i = 1; i <= d; ++i) {
            if (tag[i] == true) journey++;
            else {
                fill = 0;
                break;
            }
        }

        if (fill) printf("%.2f\n",currentprice);
        else printf("The maximum travel distance = %.2f\n", journey);
    }
    return 0;
}