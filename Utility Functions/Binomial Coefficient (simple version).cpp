/// Author: SPyofgame
/// Complexity <Time, Auxiliary space> = F<T, S>
///         Problems           Functions              Complexity
/// Binomial Coefficient   -   nck(n, k)   -   F< O(min(k, n - k), O(1) >

#include <iostream>

using namespace std;

int nck(int n, int k)
{
    int res = 1;
    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << nck(n, k);
    return 0;
}
