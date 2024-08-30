/**
#include<iostream>
using namespace std;
int main(){
    int n,x,y,xmin,ymin;
    scanf("%d",&n);
    scanf("%d %d",&xmin,&ymin);
    while(--n){
        scanf("%d %d",&x,&y);
        if(x<xmin||(x==xmin&&y<ymin)){
            xmin=x;
            ymin=y;
        }
    }
    printf("%d %d",xmin,ymin);

}
**/
#include "iostream"
#include "cstdio"
#include "algorithm"

using namespace std;

struct couple {
    int x;
    int y;
};

bool comp(couple n, couple m) {
    if (n.x == m.x)
        return n.y < m.y;
    else
        return n.x < m.x;
}

int main() {
    int n;
    while (scanf("%d", &n)) {
        couple num[n];
        for (int i = 0; i < n; ++i) {
            scanf("%d%d", &num[i].x, &num[i].y);
        }
        sort(num, num + n, comp);
        cout << num[0].x << " " << num[0].y << endl;
    }
    return 0;
}