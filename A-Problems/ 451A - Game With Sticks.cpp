#include <iostream>
 
using namespace std;
 
int main() {
    short m,n;
    cin >> m >> n;
    cout << ((m>n) ? ( (n&1) ? "Akshat" : "Malvika" ) : ( (m&1) ? "Akshat" : "Malvika" ) );
    return 0;
}
