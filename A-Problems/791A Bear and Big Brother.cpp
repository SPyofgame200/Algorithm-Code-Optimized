#include <iostream>
 
using namespace std;
 
int main() {
    short a,b,k=0;
    cin >> a >> b;
    while (a<=b) {
        a*=3;b*=2;k++;
    }
    cout << k;
    return 0;
}
