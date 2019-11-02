    #include <iostream>
    #include <algorithm>
     
    using namespace std;
     
    int main() {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << (2 * (c + min(a,b)) + (a != b));
        return 0;
    }
