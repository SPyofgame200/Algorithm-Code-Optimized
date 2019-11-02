#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int x, pred;
    cin >> pred;

    int cnt = 0, arr[n];
    while (n--) {
        cin >> x;
        if (x == 1 || n == 0)
            arr[cnt++] = pred;
        pred = x;
    }

    cout << cnt << endl;
    for (int i = 0; i < cnt; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
