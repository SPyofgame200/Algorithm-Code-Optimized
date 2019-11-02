#include <iostream>
 
using namespace std;
 
int main() {
    int q;
    cin >> q;
 
    while (q--) {
        string s;
        cin >> s;
 
        int len = s.size();
        if (len > 10)
            cout << s[0] << len-2 << s[len-1] << endl;
        else
            cout << s << endl;
    }
 
    return 0;
}
