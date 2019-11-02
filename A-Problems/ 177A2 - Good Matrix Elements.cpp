    #include <iostream>
    #include <algorithm>

    using namespace std;

    int main() {
        int n, x;
        cin >> n;

        int sum = 0, mid = (n + 1) / 2;

        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j) {
                cin >> x;
                if ((i == mid) || (j == mid) || (abs(mid - i) == abs(mid - j)))
                    sum += x;
            }

        cout << sum;
        return 0;
    }
