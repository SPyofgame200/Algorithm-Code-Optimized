/// Author: SPyofgame
/// Complexity <Time, Auxiliary space> = F<T, S>
///            Problems                   Functions                 Complexity
/// Sign of number              -   sign(x)                   -   F< O(1), O(1 )>
/// Absolute value              -   abs(x)                    -   F< O(1), O(1) >
/// Extended GCD                -   extgcd(a, b, &x, &y)      -   F< O(log n), O(1) >
/// Linear Diophantine Equation -   dio_eq(a, b, c, &x, &y)   -   F( O(log n), O(1) >

#include <iostream>

using namespace std;

/// Utility Functions
int sign(int x) { return (x < 0 ? -1 : x && 1); }
int abs(int x)  { return (x < 0 ? -x : x); }

/// Extended GCD
int extgcd(int a, int b, int &x, int &y)
{
    if (b == 0)
        return x = 1, y = 0, a;

    int d = extgcd(b, a % b, x, y);
    int t = x - (a / b) * y;
    return x = y, y = t, d;
}

/// Linear Diophantine Equation
int dio_eq(int a, int b, int c, int &x, int &y)
{
    int d = extgcd(abs(a), abs(b), x, y);
    if (c % d)
        return false;

    x *= sign(a) * c / d;
    y *= sign(b) * c / d;
    return d;
}

/// Driver
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int x, y;
    int d = dio_eq(a, b, c, x, y);
    if (d)
        cout << a << " * " << x << " + " << b << " * " << y << " = " << c << endl;
    else
        cout << "Cant find any pair of integer roots" << endl;
    return 0;
}



