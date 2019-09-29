#include <iostream>
#include <cstring>
 
using namespace std;
 
const int LIM = 1e5 + 15;
 
int fre[LIM];
long long a, b, c;
 
int main() {
    int n;
    cin >> n;
 
    memset(fre, 0, sizeof(fre));
    int x;
    for (int i = 0; i < n; ++i)
        cin >> x, fre[x]++;
 
    a = 0, b = fre[1];
    for (int i = 2; i < LIM; ++i)
        c = max(b, 1LL * i * fre[i] + a), a = b, b = c;
 
    cout << a;
    return 0;
}
