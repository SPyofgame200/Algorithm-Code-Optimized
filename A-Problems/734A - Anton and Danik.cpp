#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    cin >> s >> s;
    int count = 0;
    for (int i = 0; i < s.size(); ++i)
        if (s[i]=='A') ++count; else --count;
    if (count > 0) cout << "Anton";
    else if (count < 0) cout << "Danik";
    else cout << "Friendship";
    return 0;
}
