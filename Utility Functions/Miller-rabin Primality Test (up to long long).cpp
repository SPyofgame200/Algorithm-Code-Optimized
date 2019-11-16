/// Author: SPyofgame
/// Complexity <Time, Auxiliary space> = F<T, S>
///            Problems              Functions              Complexity
/// Modular Product               -   mp(a, b, m)    -   F< O(log n), O(1) >
/// Modular Power                 -   mpw(a, b, m)   -   F< O(log^2(n)), O(1) >
/// Miller-rabin Primality Test   -   isPrime(p)     -   F< O(k * log^3(n)), O(1) >

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

typedef long long ll;

/// Modular Product -> (a * b) % m
ll mp(ll a, ll b, ll mod)
{
    ll res = 0;
    b %= mod;
    while (b) {
        a %= mod;
        if (b & 1)
            res = (res + a) % mod;
        b >>= 1, a <<= 1;
    }
    return res;
}

/// Modular Power -> calculate (a ^ n) % m
ll mpw(ll a, ll n, ll m)
{
    ll res = 1;
    while (n > 0) {
        if (n & 1)
            res = mp(a, res, m);
        n >>= 1;
        a = mp(a, a, m);
    }
    return res;
}

/// Miller-rabin Primality Test
bool isPrime(ll p)
{
    if (p < 2 || p == 4)
        return 0;
    if (p < 4) // 2, 3
        return 1;

    ll q = p - 1, k = 0;
    while (!(q & 1))
        q >>= 1, k++;

    srand(time(NULL));
    ll a = rand() % (p-4) + 2;
    ll t = mpw(a, q, p);

    bool ok = (t == 1) || (t == p - 1);
    while (k-- && !ok)
    {
        t = mp(t, t, p);
        ok = (t == p - 1);
    }

    return ok;
}

/// Driver
int main()
{
    ll n;
    cin >> n;
    cout << (isPrime(n) ? "YES" : "NO");
    return 0;
}
