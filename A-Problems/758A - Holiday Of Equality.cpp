    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n, x, s = 0, max = 0;
        cin >> n;
        
        for (int i = 0; i < n; ++i) {
            cin >> x;
            s += x;
            if (x > max)
                max=x;
        }
        
        cout << max * n -s;
        return 0;
    }
