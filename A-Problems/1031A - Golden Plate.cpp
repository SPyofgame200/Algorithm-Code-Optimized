    #include <iostream>
     
    using namespace std;
     
    int main() {
        int w, h, k;
        cin >> w >> h >> k;
     
        int sum = 0;
        for (int i = 0; i < k; ++i) {
            sum += (w + h - 2) * 2;
            w -= 4; h -= 4;
        }
     
        cout << sum;
        return 0;
    }
