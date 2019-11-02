    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
     
        int x, l = 0, r = 0;
        for (int i = 0; i < n; ++i) {
            cin >> x;
            if (x == 0)
                l = i + 1;
            else        
                r = i + 1;
        }
     
        cout << ((l < r) ? l : r);
    }
