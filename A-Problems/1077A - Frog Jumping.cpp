    #include <iostream>
     
    using namespace std;
     
    int main() {
        int q;
        cin >> q;
        
        while (q--) {
            int a, b, k;
            cin >> a >> b >> k;
            cout << 1LL * a * ((k + 1) / 2) - 1LL * b * (k / 2) << endl;
        }
        return 0;
    }
