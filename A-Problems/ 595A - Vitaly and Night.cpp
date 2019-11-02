    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n, m;
        cin >> n >> m;
        
        int x, y, cnt = 0;
        while (n--) {
            for (int i = 0; i < m; ++i) {
                cin >> x >> y;
                cnt += (x||y);
            }
        }
        
        cout << cnt;
        return 0;
    }
