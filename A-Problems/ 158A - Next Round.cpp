#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n, cmp); /// Decreasing sort

    int cnt = 0;
    while ((a[cnt] >= a[k - 1]) && (cnt < n) && (a[cnt] != 0))
        ++cnt;

    cout << cnt;
    return 0;
}
