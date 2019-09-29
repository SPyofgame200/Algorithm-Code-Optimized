#include <iostream>
#include <math.h> 
 
using namespace std;
 
int main() {
    int i,n,x,taxi=0,cnt[5]={0};
    cin >> n;
    for (i = 0; i < n; ++i) {
        cin >> x;
        ++cnt[x];
    }
    taxi = cnt[4] + cnt[3] + cnt[2] / 2;
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
