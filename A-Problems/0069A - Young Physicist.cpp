#include <iostream>
 
using namespace std;
 
int main() {
    short n,x=0,y=0,z=0,t;
    cin >> n;
    for (short i = 0; i < n; ++i) {
        cin >> t; x+=t;
        cin >> t; y+=t;
        cin >> t; z+=t;
    }
    cout << (( (x==0)&&(y==0)&&(z==0) ) ? "YES" : "NO");
    return 0;
}
