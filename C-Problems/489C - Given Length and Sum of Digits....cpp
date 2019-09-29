#include <iostream>
 
using namespace std;
 
int main() {
    int m,s;
    cin >> m >> s;
    if (s>9*m) {
        cout << "-1 -1";
        return 0;
    }
    if (m==1) {
        cout << s << " " << s;
        return 0;
    }
    if (s==0) {
        cout << "-1 -1";
        return 0;
    }
    if (s<=9*(m-1)) {
        cout << "1";
        for (int i = 0; i < m-2-(s-1)/9; ++i) cout << "0";
        cout << (s-1)%9;
        for (int i = 0; i < (s-1)/9; ++i) cout << "9";
    }
    else {
        cout << (s-1)%9+1;
        for (int i = 0; i < (s-1)/9; ++i) cout << "9";
    }
    cout << " " ;
    while(m--) {
        cout << ((s>8) ? 9 : ((s>0) ? s : 0) );
        s-=9;
    }
    return 0;
}
  
1
