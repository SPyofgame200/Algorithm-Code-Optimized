    #include <iostream>
     
    using namespace std;
     
    int main() {
        int q;
        cin >> q;
        while (q--) {
            int n;
            string s;
            cin >> n >> s;
            if (n < 11)
                cout << "NO";
            else {
                for (int i = 0; i < n - 10; ++i) {
                    if (s[i] == '8') {
                        n = 0;
                        break;
                    }
                }
                cout << ((n==0) ? "YES" : "NO");
            }
            cout << endl;
        }
        return 0;
    }
