#include <iostream>
 
using namespace std;
 
int main() {
    int n,cnt=0;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        switch(s[0])
        {
            case 'T': 
                    cnt+=4; 
                    break;
            case 'C':
                    cnt+=6;
                    break;
            case 'O':
                    cnt+=8;
                    break;
            case 'D':
                    cnt+=12;
                    break;
            case 'I':
                    cnt+=20;
                    break;
        }
    }
    cout << cnt;
    return 0;
}
