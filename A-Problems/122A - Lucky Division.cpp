#include <iostream>
#include <math.h>
 
using namespace std;
 
bool luckynumber(short x) {
    while ((x%10==4) || (x%10==7)) x/=10;
    return (x==0);
}
 
int main() {
    short x;
    cin >> x;
    if (x<4) cout << "NO";
    else if (luckynumber(x)) cout << "YES";
    else {
        for (short i = 1; i <= round(sqrt(x)); ++i) {
            if ( (x%i==0) && (luckynumber(i) || luckynumber(x/i)) ) {
                cout <<"YES";
                return 0;
            }
        }
        cout << "NO";
    }
    return 0;
}
