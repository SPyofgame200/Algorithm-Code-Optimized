#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string s;
    bool check[4]={false};
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
             if (check[0]!=true) { if (s[i]=='h') check[0] = true; } 
        else if (check[1]!=true) { if (s[i]=='e') check[1] = true; } 
        else if (check[2]!=true) { if (s[i]=='l') check[2] = true; } 
        else if (check[3]!=true) { if (s[i]=='l') check[3] = true; } 
        else if (s[i] == 'o') {
            cout << "YES";
            return 0;
        } 
        
    }
    cout << "NO";
    return 0;
}
