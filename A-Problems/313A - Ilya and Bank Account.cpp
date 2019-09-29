#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    cout << ( (n<0) ? ((n/100*10+n%10 > n/10) ? n/100*10+n%10 : n/10 ): n);
    return 0;
}
