    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
        
        int total = 0, cnt = 0, arr[(n+1)/2];
        char c;
        
        while (n--) {
            cin >> c;
            if (c == 'B') ++cnt;
            if (c == 'W' || n == 0) {
                if (cnt > 0)
                    arr[total++] = cnt;
                cnt = 0;
            }
        }
        
        if (total)
            cout << total << endl;
        else
            cout << total;
        
        for (int i = 0; i < total; ++i) {
            cout << arr[i] << " ";
        }
        return 0;
    }
