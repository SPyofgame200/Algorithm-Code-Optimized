#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int q;
    cin >> q;
 
    while (q--) {
        int b, p, f, h, c;
        cin >> b >> p >> f >> h >> c;
 
        if (h > c) {
            int x1 = min(b / 2, p); b -= 2 * x1;
            int x2 = min(b / 2, f);
 
            cout << x1 * h + x2 * c << endl;
        }
        else {
            int x1 = min(b / 2, f); b -= 2 * x1;
            int x2 = min(b / 2, p);
 
            cout << x1 * c + x2 * h << endl;
        }
    }
 
    return 0;
}
