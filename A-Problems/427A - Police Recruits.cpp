#include <iostream>
 
using namespace std;
 
int main() {
    int n, x, tmp=0, cnt=0;
    cin >> n;
    while (n--) {
        cin >> x;
        tmp += x;
        if (tmp < 0) {
            tmp = 0;
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}
