#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    string s,t;
    cin >> s >> t;
    s+=t;
    cin >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    cout << ((s==t) ? "YES" : "NO");
    return 0;
}
