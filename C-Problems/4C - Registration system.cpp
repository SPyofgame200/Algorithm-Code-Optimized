#include <iostream>
#include <map>
 
using namespace std;
 
typedef map <string, int> database;
 
int main() {
    int q;
    cin >> q;
 
    string s;
    database username;
    while (q--) {
        cin >> s;
        if (username.count(s)==0) 
            cout << "OK" << endl;
            username[s] = 1;
        }
        else 
            cout << s << username[s] << endl;
            username[s] += 1;
        }
    }
 
    return 0;
}
