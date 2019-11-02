    #include <iostream>
     
    using namespace std;
     
    int main() {
        int ping_a = 0, ping_b = 0;
        int cnt_a = 0, cnt_b = 0;
     
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int t, x, y;
            cin >> t >> x >> y;
     
            if (t == 1)
                ping_a += x, cnt_a++;
            else      
                ping_b += x, cnt_b++;
        }
     
        cout << ((ping_a >= 5 * cnt_a) ? "LIVE" : "DEAD");
        cout << endl;
        cout << ((ping_b >= 5 * cnt_b) ? "LIVE" : "DEAD");
    }
