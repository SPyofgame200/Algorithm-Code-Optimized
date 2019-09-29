#include <iostream>
 
using namespace std;
 
int main() {
    string s,t;
    cin >> s;
    t=s;
    bool ok = false;
    t[0] += ( (t[0]>'Z') ? -32 : 32);
    for (short i = 1; i < s.size(); ++i) {
        if (t[i]>'Z') {
            ok = true;
            break;
        }
        else t[i]+=32;
    }
    if (ok) cout << s;
    else cout << t;    
    return 0;
}
