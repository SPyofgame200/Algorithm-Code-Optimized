#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int home[101], guest[101];
    for (int i = 1; i < 101; ++i) {
        home[i]=0;
        guest[i]=0;
    }
    
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x; home[x]++;
        cin >> x;guest[x]++;
    }
    
    int cnt = 0;
    for (int i = 1; i <= 100; ++i) {
        cnt += home[i]*guest[i];
    }
    
    cout << cnt;
    return 0;
}
