#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, l;
    cin >> n >> l;
    int pos[n];
    for (int i = 0; i < n; ++i) {
        cin >> pos[i];
    }
    
    sort(pos, pos +n);
    int rad = 2*max(pos[0],l-pos[n-1]);
    for (int i = 0; i < n-1; ++i) {
        rad = max(rad,pos[i+1]-pos[i]);
    }
    
    cout.precision(10);
    cout << fixed << rad/2.0;
    return 0;
}
