#include <iostream>
 
using namespace std;
 
int main() {
    string s,t;
    cin >> s >> t;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] != t[s.size()-i-1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
