#include <iostream>
 
using namespace std;
 
int main() {
    int n,len(1),max(1),x,pred;
    cin >> n >> pred;
    for (int i = 1; i < n; ++i) {
        cin >> x;
        if (pred>x) len = 1;
        else ++len;
        if (len>max) max=len;
        pred=x;
    }
    cout << max;
    return 0;
}
