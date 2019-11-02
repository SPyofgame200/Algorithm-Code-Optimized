    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n, cnt = 0;
        cin >> n;
        
        for (int i = 1; i <= n / 2; ++i) 
            cnt += ((n - i) % i == 0);
        
        cout << cnt;
        return 0;
    }
