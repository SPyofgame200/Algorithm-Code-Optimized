#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
    int n,count=0;
    char s;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> s >> s;
        count += (s=='+') ? 1 : -1;
        cin >> s;
    }
    cout << count;
    return 0;
}
