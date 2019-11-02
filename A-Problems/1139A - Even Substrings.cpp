    #include <iostream>
     
    using namespace std;
     
    bool check(char c) {
        return (c == '0' || c == '2' || c == '4' || c == '6' || c == '8');
    }
     
    int main() {
        int n;
        cin >> n;
     
        long long cnt = 0;
        for (int i = 0; i < n; ++i) {
            char c;
            cin >> c;
            if (check(c)) {
                cnt += (i+1);
            }
        }
     
        cout << cnt;
        return 0;
    }
