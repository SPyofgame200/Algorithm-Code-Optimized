#include <iostream>
 
using namespace std;
 
int main() {
    int q, k;
    cin >> q >> k;
 
    int x, cnt = 0;
    while (q--) {
        cin >> x;
        cnt += (5-x-k >= 0);
    }
 
    cout << cnt/3;
    return 0;
}
