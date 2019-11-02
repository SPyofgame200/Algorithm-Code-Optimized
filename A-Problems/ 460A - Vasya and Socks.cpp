#include <iostream>
 
using namespace std;
 
int main() {
    int n, m, day=0, cnt=0;
    cin >> n >> m;
    while (n > 0) {
        day=day%m+n;
        cnt+=n;
        n=day/m;
    }
    cout << cnt;
    return 0;
}
