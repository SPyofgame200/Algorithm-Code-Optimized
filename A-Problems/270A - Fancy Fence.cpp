#include <iostream>
 
using namespace std;
 
int main() {
    int q;
    cin >> q;
 
    while (q--) {
        int a;
        cin >> a;
        cout << ((360%(180-a)==0) ? "YES" : "NO") << endl;
    }
 
    return 0;
}
