#include <iostream>
 
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    int cnt = 0;
    while (a > 0) {
        if (a < b) {
            cnt += a;
            break;
        }
        else {
            a = a - b + 1;
            cnt += b;
        }
    }
 
    cout << cnt;
    return 0;
}
