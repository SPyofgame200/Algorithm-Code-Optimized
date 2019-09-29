#include <iostream>
 
using namespace std;
 
int main() {
    string s;
    getline(cin,s);
    short arr[26],cnt=0;
    for (short i = 0; i < 27; ++i) arr[i]=0;
    for (short i = 1; i < s.size(); i+=3) {
        ++arr[(int)(s[i]-97)];
    }
    for (short i = 0; i < 27; ++i) {
        if (arr[i] > 0) ++cnt;
    }
    cout << cnt;
    return 0;
}
