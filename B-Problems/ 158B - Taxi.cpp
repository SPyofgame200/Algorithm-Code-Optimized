#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int x, cnt[5] = {0};
    for (int i = 0; i < n; ++i) {
        cin >> x;
        ++cnt[x];
    }
    
    int taxi = cnt[4] + cnt[3] + cnt[2] / 2;
    cnt[1] -= cnt[3];
    
    if (cnt[2] % 2 == 1) {
        taxi += 1;
        cnt[1] -= 2;
    }
 
    if (cnt[1] > 0) {
        taxi += (cnt[1] + 3) / 4;
    }
 
    cout << taxi;
    return 0;
}
