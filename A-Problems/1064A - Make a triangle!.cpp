    #include <iostream>
    #include <algorithm>
     
    using namespace std;
     
    int main() {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (a < b) swap(a,b);
        if (b < c) swap(b,c);
        if (a < b) swap(a,b);
        
        if (a < b + c)
            cout << 0;
        else
            cout << a - b - c + 1;    
        return 0;
    }
