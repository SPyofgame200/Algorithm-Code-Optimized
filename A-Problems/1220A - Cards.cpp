    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
     
        char c;
        int z = 0;
        for (int i = 0; i < n; ++i) {
            cin >> c;
            z += (c == 'z');
        }
     
        n = (n - 4 * z) / 3;
        for (int i = 0; i < n; ++i) {
            cout << "1 ";
        }
        for (int i = 0; i < z; ++i) {
            cout << "0 ";
        }
     
        return 0;
    }
