    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n, q;
        cin >> n >> q;
        
        string s;
        cin >> s;
     
        while (q--) {
            int l, r;
            cin >> l >> r;
            
            char c1, c2;
            cin >> c1 >> c2;
     
            for (int i = l - 1; i < r; ++i) {
                if (s[i] == c1) {
                    s[i] = c2;
                }
            }
        }
     
        cout << s;
    }
