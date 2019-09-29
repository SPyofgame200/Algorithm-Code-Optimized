#include <iostream>
#include <string>
#include <algorithm>
 
using namespace std;
 
int main() {
    string s;
    char c[] = {'a','o','y','e','u','i','A','O','Y','E','U','I'};
    cin >> s;
    
    for (int i = 0; i < 12; ++i) {
        s.erase(remove(s.begin(),s.end(),c[i]),s.end());
    }
    for (int i = 0; i < s.length(); ++i) {
        if ((s[i]>64)&&(s[i]<91)) s[i]+=32;
        cout << "." << s[i];
    }
    return 0;
} 
