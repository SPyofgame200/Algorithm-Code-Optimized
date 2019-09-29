#include <iostream>
#include <algorithm>
 
using namespace std;
 
#define FastIO ios::sync_with_stdio(NULL),cin.tie(NULL),cout.tie(NULL)
 
int main() {
    FastIO;
    
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    
    int bestlen = 0;
    for (int i = 0; i <= n/a; ++i) {
        for (int j = 0; j <= (n-a*i)/b; ++j) {
            int z = (n - a*i - b*j)/c;
            if (a*i + b*j + c*z == n && z >= 0) {
                bestlen = max(bestlen, i+j+z);
            }
        }
    }
    
    cout << bestlen;
    return 0;
}
