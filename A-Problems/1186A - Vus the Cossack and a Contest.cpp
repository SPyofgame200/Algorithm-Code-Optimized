    #include <iostream>
     
    using namespace std;
     
    int main() {
        int a, b, c;
        cin >> a >> b >> c;
        b = b < c ? b : c;
        cout << (a > b ? "NO" : "YES");
        return 0;
    }
