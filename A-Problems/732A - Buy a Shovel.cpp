#include <iostream>
 
using namespace std;
 
int main() {
    short k,r;
    cin >> k >> r;
    k%=10;
    for (short i = 1; i <= 9; ++i) {
        if ((i*k-r)%10==0||(i*k)%10==0) {
            cout << i;
            return 0;
        }
    }
    return 0;
}
