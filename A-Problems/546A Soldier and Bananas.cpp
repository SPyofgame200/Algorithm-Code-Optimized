#include <iostream>
 
using namespace std;
 
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    a=a*c*(c+1)/2-b;
    if (a<0) cout << 0;
    else cout << a;
    return 0;
}
