#include <iostream>
 
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int pred, x;
    cin >> pred;
    long long len = pred-1;
    while (--m) {
        cin >> x;
        len += x - pred;
        if (x < pred) len += n;
        pred = x;
    }
 
    cout << len;
    return 0;
}
