#include <iostream>
 
using namespace std;
 
int main(){
    int n, k;
    cin >> n >> k;
 
    int x, cnt = 0;
    for (int i = 0; i < k; ++i) {
        cin >> x;
        cnt += (x > 0); /// x must greater than 0
    }
 
    int pre = x;
    for (int i = k; i < n; ++i) {
        cin >> x;
        cnt += (x == pre && pre); /// if the i-th contestant has equal score
    }
 
    cout << cnt;
    return 0;
}
