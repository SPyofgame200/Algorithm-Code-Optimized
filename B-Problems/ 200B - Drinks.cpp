#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() {
    int n, x, s = 0;
    cin >> n;
 
    for (int i = 0; i < n; ++i) {
        cin >> x;
        s += x;
    }
 
    cout << setprecision(5) << fixed << (double)(s) / n;
    return 0;
}
