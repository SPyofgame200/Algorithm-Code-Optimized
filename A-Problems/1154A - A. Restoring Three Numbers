    #include <iostream>
    
    int max(int a, int b) {
        return a > b ? a : b;
    }
     
    using namespace std;
     
    int main() {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int p = max(max(a, b), max(c, d));
             if (p == a) cout << p - b << " " << p - c << " " << p - d;
        else if (p == b) cout << p - a << " " << p - c << " " << p - d;
        else if (p == c) cout << p - a << " " << p - b << " " << p - d;
        else if (p == d) cout << p - a << " " << p - b << " " << p - c;
        return 0;
    }
