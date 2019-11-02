#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

char c[] = {'a','o','y','e','u','i','A','O','Y','E','U','I'};

int main() {
    string s;
    cin >> s;

    /// delete all vowels
    for (int i = 0; i < 12; ++i) {
        s.erase(remove(s.begin(),s.end(),c[i]),s.end());
    }

    /// add '.' before consonant
    for (int i = 0, len = s.size(); i < len; ++i) {
        cout << "." << (s[i] < 'a' ? char(s[i] + 32) : s[i]);
    }
    return 0;
}
