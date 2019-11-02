#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int x, cnt=0, max_cnt=0, ones=0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (x==1) cnt = max(--cnt, 0);
        else  max_cnt = max(++cnt, max_cnt);
        ones+=(x==1);
    }
 
    if (n==ones) --ones;
    cout << max_cnt + ones;
    return 0;
}
