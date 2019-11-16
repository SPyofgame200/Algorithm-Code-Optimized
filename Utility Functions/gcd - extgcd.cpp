/// Author: SPyofgame
/// Project: Greatest Common Divisor (gcd)
/// Project: Extended GCD (extgcd)

#include <iostream>

using namespace std;

/// Greatest Common Divisor
int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}
/// Greatest Common Divisor
//
//
//
/// Extended GCD
int extgcd(int a, int b, int &x, int &y) {
    if (b == 0)
        return x = 1, y = 0, a;

    int d = extgcd(b, a % b, x, y);
    int t = x - (a / b) * y;
    return x = y, y = t, d;
}
/// Extended GCD
//
//
//
/// Check 2 functions' results
void compare()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; ++i)
    {
        for (int j = 0; j <= m; ++j)
        {
            int x, y;
            int p = extgcd(i, j, x, y);
            int q = gcd(i, j);
            if (p != q)
                cout << "gcd(" << i << ", " << j << ") = " << p << " != " << q << " _ " << x << " _ " << y << endl;
        }
    }
}
/// Check 2 functions' results
//
//
//
/// Driver
int main() {
    int a, b, x, y;
    cin >> a >> b;
    cout << gcd(a, b) << " " << extgcd(a, b, x, y);
    return 0;
}

