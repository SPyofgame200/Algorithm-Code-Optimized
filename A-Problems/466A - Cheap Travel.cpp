#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << min(n/m*b+n%m*a,min((n+m-1)/m*b,n*a));
    return 0;
}
