#include <iostream>
#include <cmath>
 
using namespace std;
 
bool prime(long long n) {
    if (n < 2)  return false;
    if (n < 4)  return true;
    if (!(n & 1) || n % 3 == 0) return false;
 
    for (long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
           return false;
    return true;
}
 
bool square(long long n) {
    return (sqrt(n) == round(sqrt(n)));
}
 
int main() {
    ios::sync_with_stdio(NULL),cin.tie(NULL),cout.tie(NULL);
    
    int q;
    cin >> q;
    while (q--) {
        long long x;
        cin >> x;
        cout << ((prime(sqrt(x)) && square(x)) ? "YES" : "NO");
        if (q) cout << endl;
    }
 
    return 0;
}
