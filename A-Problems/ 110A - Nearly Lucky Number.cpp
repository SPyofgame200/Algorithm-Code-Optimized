#include <iostream>
#include <math.h>
 
using namespace std;
 
bool luckynumber(long long n) {
    if (n<4) return false;
    while ((n%10==4)||(n%10==7)) n/=10;
    return (n==0);
}
 
int main() {
    string s;
    short count=0;
    cin >> s;
    for (short i = 0; i < s.size(); ++i) {
        if ( (s[i]=='4')||(s[i]=='7') ) ++count;
    }
    cout << ((luckynumber(count)) ? "YES" : "NO");
    return 0;
}
