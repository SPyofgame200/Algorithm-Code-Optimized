#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int a, b, n, t;
    cin >> a >> b >> n;
    while(true) {
        t = __gcd(a, n);
        if (n < t) {cout << 1; break;}
        n-= t;
        t = __gcd(b, n);
        if (n < t) {cout << 0; break;}
        n-= t;
    }
    return 0;
}
