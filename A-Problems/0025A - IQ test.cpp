#include <iostream>
 
using namespace std;
 
int main() {
    int n, x, odd(-1), even(-1), cnt(0);
    cin >> n;
 
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        if (x & 1)
            odd = i;
        else
            even = i;
        cnt += (x & 1);
    }
 
    cout << ( (cnt == 1) ? odd : even );
    return 0;
}
