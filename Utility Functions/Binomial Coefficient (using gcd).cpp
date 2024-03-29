/// Author: SPyofgame
/// Complexity <Time, Auxiliary space> = F<T, S>
///         Problems              Functions            Complexity
/// Greatest Common Divisor   -   gcd(a, b)   -   F< O(log(a + b)), O(1) >
/// Binomial Coefficient      -   ncr(n, r)   -   F< O(min(r, n - r), O(1) >

#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    return (b ? gcd(b, a % b) : a);
}

int ncr(int n, int r)
{
    int p = 1, k = 1, m = 1;
    if (r > n - r)
        r = n - r;

    while (r) {
        p *= n--; k *= r--;
        m = gcd(p, k);
        p /= m; k /= m;
    }

    return p;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << ncr(n, r);
    return 0;
}
