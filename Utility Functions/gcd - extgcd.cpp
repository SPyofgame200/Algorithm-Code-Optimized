/// Author: SPyofgame
/// Complexity <Time, Auxiliary space> = F<T, S>
///         Problems                   Functions                 Complexity
/// Greatest Common Divisor   -   gcd(a, b)              -    F< O(log n), O(1) >
/// Extended GCD              -   extgcd(a, b, &x, &y)   -    F< O(log n), O(1) >

#include <iostream>

using namespace std;

/// Greatest Common Divisor
int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}

/// Extended GCD
int extgcd(int a, int b, int &x, int &y) {
    if (b == 0)
        return x = 1, y = 0, a;

    int d = extgcd(b, a % b, x, y);
    int t = x - (a / b) * y;
    return x = y, y = t, d;
}

/// Driver
int main() {
    int a, b, x, y;
    cin >> a >> b;
    cout << "gcd(" << a << ", " << b << ") = " << gcd(a, b) << endl;
    int d = extgcd(a, b, x, y);
    cout << a << " * " << x << " + " << b << " * " << y << " = " << d << endl;
    return 0;
}

