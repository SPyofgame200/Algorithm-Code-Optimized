#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string tmp,s;
    bool ok = false;
    while (n--) {
        cin >> tmp;
        if (!ok) {
            if (tmp[0]==tmp[1]&&tmp[1]=='O') {
                tmp[0]='+'; tmp[1]='+';
                ok = true;
            }
            else 
            if (tmp[3]==tmp[4]&&tmp[4]=='O') {
                tmp[3]='+'; tmp[4]='+';
                ok = true;
            }
        }
        s+=tmp;
        if (n!=0) s+='\n';
    }
    if (ok) cout << "YES\n" << s;
    else cout << "NO";
    return 0;
}
