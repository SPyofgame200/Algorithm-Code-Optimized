    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
        
        int mark[n];
        for (int i = 0; i < n; ++i) {
            cin >> mark[i] >> mark[i];
        }
     
        int k;
        cin >> k;
        int cnt = n;
        for (int i = 0; i < n; ++i) {
            if (mark[i] < k) --cnt;
            else break;
        }
        
        cout << cnt;
        return 0;
    }
