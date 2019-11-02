#include <iostream>
#include <math.h>
 
using namespace std;
 
bool composite(int n) {
    if (n<4) return false;
    for (short i = 2; i <= sqrt(n); ++i) {
        if (n%i==0) {
            return true;
        }
    }
    return false;
}
 
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= (n+1)/2; ++i) {
        if (composite(i)&&composite(n-i)) {
            cout << i << " " << n-i;
            return 0;
        }
    }
    return 0;
}
