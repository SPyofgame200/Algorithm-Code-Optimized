#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    string a,b;
    cin >> a >> b;
    for (short i = 0; i < a.size(); ++i) {
        cout << (a[i]^b[i]);
    }
    return 0;
}
