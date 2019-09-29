#include <iostream>
#include <map>
 
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    map <char, int> freq;
    for (int i = 0; i < s.size(); ++i) {
        if (freq.count(s[i]) == 0) {
            freq[s[i]]=1;
        }
        else {
            freq[s[i]]++;
        }
    }
 
    cout << ((freq.size() & 1) ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}
