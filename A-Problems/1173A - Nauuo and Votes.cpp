    #include <iostream>
     
    using namespace std;
     
    int main() {
        int a, b, c;
        cin >> a >> b >> c;
             if (a - b > c) cout << "+";
        else if (b - a > c) cout << "-";
        else if (a == b && c == 0) cout << "0";
        else cout << "?";
    }
