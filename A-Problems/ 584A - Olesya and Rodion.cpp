#include <iostream>
 
using namespace std;
 
int main() {
    int n, t;
    cin >> n >> t;
    if (t==10) {
        cout << ((n==1) ? -1 : 1);
    }
    else cout << t;
    while(--n) cout << 0;
    return 0;
}
