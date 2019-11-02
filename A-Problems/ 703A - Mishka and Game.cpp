#include <iostream>
 
using namespace std;
 
int main() {
    int n, x, y, cnt=0;
    cin >> n;
    while (n--) {
        cin >> x >> y;
             if (x>y) ++cnt;
        else if (x<y) --cnt;
    }
         if (cnt > 0) cout << "Mishka";
    else if (cnt < 0) cout << "Chris";
    else cout << "Friendship is magic!^^";
    return 0;
}
