#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n,x,y,s=0,m=0;
    cin >> n;
    for (short i = 0; i < n; ++i) {
        cin >> x >> y;
        s=s-x+y;m=max(s,m);
    }
    cout << m;
    return 0;
}
