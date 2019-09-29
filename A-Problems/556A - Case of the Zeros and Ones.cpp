#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
 
    int len=0;
    for (int i = 0; i < n; ++i) {
        if (s[i]=='1') ++len; else --len;
    }
 
    cout << abs(len);
    return 0;
}
