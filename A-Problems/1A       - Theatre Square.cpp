#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m, a;
    cin >> n >> m >> a;
    cout << (long long)(ceil(1.0 * n / a) * ceil(1.0 * m / a));
    return 0;
}
