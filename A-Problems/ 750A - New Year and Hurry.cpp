#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
    int n,k,i;
    cin >> n >> k;
    k=(240-k)/5;
    for (i = 0; i<=n; ++i) {
        if (i*(i+1)/2>k) {
            cout << i-1;
            return 0;
        }
    }
    cout << n;
    return 0;
}
