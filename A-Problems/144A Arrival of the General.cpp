#include <iostream>
 
using namespace std;
 
int main() {
    short n, x, maxval=1, minval=101, maxpos=1, minpos=1;
    cin >> n;
    for (short i = 1; i <= n; ++i) {
        cin >> x;
        if (x>maxval) {
            maxval=x;
            maxpos=i;
        }
        if (x<=minval) {
            minval=x;
            minpos=i;
        }
    }
    cout << (maxpos-1) + (n-minpos) - (maxpos < minpos ? 0 : 1);
    return 0;
}
