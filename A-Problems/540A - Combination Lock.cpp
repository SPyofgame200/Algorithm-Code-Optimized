#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, cnt=0;
    string s1, s2;
    cin >> n >> s1 >> s2;
    
    for (short i = 0; i < n; ++i) {
        cnt += min(abs(s1[i]-s2[i]),10-abs(s1[i]-s2[i]));
    }
    cout << cnt;
    return 0;
}
