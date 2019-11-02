    #include <iostream>
     
    using namespace std;
     
    int main() {
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        
        string s;
        cin >> s;
        
        int sum = 0;
        for (int i = 0; i < s.size(); ++i) {
            sum += a[s[i] - 49];
        }
        
        cout << sum;
        return 0;
    }
