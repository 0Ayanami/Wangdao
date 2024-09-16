#include "iostream"
#include "algorithm"

using namespace std;

const int MAXN = 10001;
int num[MAXN];

int main(){
    int n;
    while(cin >> n){
    if(n == 0)
         break;
    for(int i = 0; i < n;i++){
            cin >> num[i];
    }
    sort(num, num + n);
    if(n % 2 == 0){
         cout << (num[n/2 - 1] + num[n /2]) / 2 << endl;
    }
    else{
         cout << num[n/2] << endl;
    }
    }
    return 0;
}

