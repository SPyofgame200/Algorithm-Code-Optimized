#include <iostream>
 
using namespace std;
 
int main() {
    int x,n,s,count=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        s=0;
        cin >> x;s+=x;cin >> x;s+=x;cin >> x;s+=x;
        if (s > 1) ++count;
    }
    cout << count;
    return 0;
}
