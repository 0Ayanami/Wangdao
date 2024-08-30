/**
#include<iostream>
#include<algorithm>
using namespace std;

#define ll int
#define MAX 250
#define inf 10000000
#define mod 10000

int main() {
    ll a0, a1, p, q, k;
    while (cin >> a0 >> a1 >> p >> q >> k) {
        ll cnt = 2, res = 0;
        if (k == 0)cout << a0 << endl;
        else if (k == 1)cout << a1 << endl;
        else {
            while (cnt <= k) {
                res = (q * a0 % mod + p * a1 % mod) % mod;
                a0 = a1, a1 = res; cnt++;
            }
        }
        cout << res << endl;
    }
}
**/
#include<iostream>

using namespace std;
const int mod = 10000;

struct Matrix {
    int matrix[2][2];
    int row, col;

    Matrix(int r, int c) : row(r), col(c) {}
};

Matrix Multiply(Matrix a, Matrix b) {
    Matrix res(a.row, b.col);
    for (int i = 0; i < res.row; ++i) {
        for (int j = 0; j < res.col; ++j) {
            res.matrix[i][j] = 0;
            for (int k = 0; k < a.col; ++k) {
                res.matrix[i][j] = (res.matrix[i][j] + a.matrix[i][k]*b.matrix[k][j]) % mod;
            }
        }
    }
    return res;
}

Matrix FastExpo(Matrix a, int k) {
    Matrix res(a.row, a.col);
    for (int i = 0; i < res.row; ++i) {
        for (int j = 0; j < res.col; ++j) {
            if (i == j)
                res.matrix[i][j] = 1;
            else
                res.matrix[i][j] = 0;
        }
    }
    while (k != 0) {
        if (k % 2 == 1) {
            res = Multiply(res, a);
        }
        a = Multiply(a, a);
        k /= 2;
    }
    return res;
}

int main() {
    int a0, a1, p, q, k;
    cin >> a0 >> a1 >> p >> q >> k;
    Matrix a(2, 2);
    a.matrix[0][0] = p;
    a.matrix[0][1] = q;
    a.matrix[1][0] = 1;
    a.matrix[1][1] = 0;
    a = FastExpo(a, k - 1);
    int res = ((a.matrix[0][0] * a1) % mod + (a.matrix[0][1] * a0) % mod) % mod;
    cout <<res<<endl;
}