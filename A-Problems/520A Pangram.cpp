#include <iostream>
 
using namespace std;
 
int main() {
    short i;
    cin >> i;
    if (i<26) cout << "NO";
    else {
        string s,t="00000000000000000000000000";
        cin >> s;
        for (i = 0; i < s.size(); ++i) {
            if (s[i]<'a') s[i]+=32;
            t[s[i]-97]='1';
        }
        for (i = 0; i < 26; ++i) {
            if (t[i]=='0') {
                cout << "NO";
                return 0;
            }
        }
        cout << "YES";
    }
    return 0;
}
