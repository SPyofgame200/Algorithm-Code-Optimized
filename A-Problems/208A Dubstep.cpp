#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s, t; 
    cin >> s;
    
    for (int i = 0; i < s.size(); ++i) {
        if ((s[i]=='W') && (s[i+1]=='U') && (s[i+2]=='B')) {
            i+=2;
            if ((t.size()>0) && (t[t.size()-1]!=' '))
              t += ' ';   
        }
        else t += s[i];
    }
    
    cout << t;
    return 0;
}
