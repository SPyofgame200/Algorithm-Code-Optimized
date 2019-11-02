#include <iostream>
 
using namespace std;
 
int main() {
    string s,lower,upper;
    cin >> s;
    lower=s;upper=s;
    short count=0, n=s.size();
    for (short i = 0; i < n; ++i) {
        if (s[i]<'a') {
               ++count;
               lower[i]+=32;
        } else upper[i]-=32;
    }
    if (count > n/2) cout << upper;
    else cout << lower;
    return 0;
}
