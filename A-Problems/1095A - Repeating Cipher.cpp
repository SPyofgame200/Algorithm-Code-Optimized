#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s >> s;
    
    string t;
    int pos = 0, sum = 0;
    while (pos < s.size()) {
        t.push_back(s[pos]);
        pos += ++sum;
    }
    
    cout << t;
    return 0;
}
