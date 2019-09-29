#include <iostream>
 
using namespace std;
 
int main() {
    int n,cnt=0;
    cin >> n; n<<=1;
    while (n>>=1) cnt+=n&1;
    cout << cnt;
    return 0;
}
