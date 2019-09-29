#include <iostream>
 
using namespace std;
 
int main() {
    short n, x, odd(-1), even(-1), cnt(0);
    cin >> n;
    for (short i = 1; i <= n; ++i) {
        cin >> x;
        if (x&1) {
            odd=i;
            ++cnt;
        }
        else even=i;
    }
    cout << ( (cnt==1) ? odd : even );
    return 0;
}
