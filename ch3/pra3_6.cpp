/**
#include <stdio.h>
int main(){
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n];
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        if(a[0]!=a[1]) printf("0 ");
        for(i=1;i<n-1;i++)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1]) printf("%d ",i);
            else if(a[i]<a[i-1]&&a[i]<a[i+1]) printf("%d ",i);
        }
        if(a[n-1]!=a[n-2]) printf("%d",n-1);
        printf("\n");
    }
}
**/
#include "iostream"
#include "cstdio"

using namespace std;

int main() {
    int k;
    scanf("%d", &k);
    int num[k];
    bool first = false;
    scanf("%d", &num[0]);
    for (int i = 1; i < k; ++i) {
        scanf("%d", &num[i]);
        if (i == 1) {
            if (num[i] != num[i - 1]) {
                if (!first) {
                    first = true;
                } else {
                    cout << " ";
                }
                cout << i - 1;
            }
        } else {
            if (num[i] > num[i - 1] && num[i - 2] > num[i - 1]) {
                if (!first) {
                    first = true;
                } else {
                    cout << " ";
                }
                cout << i - 1;
            } else if (num[i] < num[i - 1] && num[i - 2] < num[i - 1]) {
                if (!first) {
                    first = true;
                } else {
                    cout << " ";
                }
                cout << i - 1;
            }
            if (i == k - 1) {
                if (num[i] != num[i - 1]) {
                    if (!first) {
                        first = true;
                    } else {
                        cout << " ";
                    }
                    cout << i;
                }
            }
        }
    }
    cout << endl;
    return 0;
}