    #include <iostream>
     
    using namespace std;
     
    int main() {
        string s;
        cin >> s >> s;
        
        int toS = 0, toF = 0;
        char pred = s[0];
        for (int i = 1; s[i]; ++i) {
            if (s[i-1] != s[i]) {
                if (s[i]=='S')
                    ++toS;
                else
                    ++toF;
            }
        }
        
        cout << (toS < toF ? "YES" : "NO");
        return 0;
    }
