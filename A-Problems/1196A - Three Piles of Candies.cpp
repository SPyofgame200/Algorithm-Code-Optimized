    #include <iostream>
     
    using namespace std;
     
    int main() {
        int q;
        cin >> q;
        
        while (q--) {
            long long x, s = 0;
            cin >> x; s += x;
            cin >> x; s += x;
            cin >> x; s += x;
            cout << s / 2 << endl;
        }
        
        return 0;
    }
