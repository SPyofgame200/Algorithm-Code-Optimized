#include <iostream>
 
using namespace std;
 
int main() {
    short n,x,max=0,min=10000,cnt=-1;
    cin >> n;
    for (short i = 0; i < n; ++i) {
        cin >> x;
        cnt += ((x>max)||(x<min));
        if (x>max) max=x;
        if (x<min) min=x;
    }
    cout << cnt;
    return 0;
}
