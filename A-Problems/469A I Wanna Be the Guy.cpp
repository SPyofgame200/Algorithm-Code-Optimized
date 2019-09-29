#include <iostream>
 
using namespace std;
 
int main() {
    short n,q,x;
    cin >> n;
    bool arr[n+1],ok=true;
    for (short i = 1; i <= n; ++i) arr[i] = 0;
    
    cin >> q;
    for (short i = 1; i <= q; ++i) {
        cin >> x;
        arr[x] = 1;
    }
    cin >> q;
    for (short i = 1; i <= q; ++i) {
        cin >> x;
        arr[x] = 1;
    }
    for (short i = 1; i <= n; ++i) {
        if (arr[i]==0) {
            ok = false;
            break;
        }
    }
    
    cout << ( (ok) ? "I become the guy." : "Oh, my keyboard!" );
    return 0;
}
