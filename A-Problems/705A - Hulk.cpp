#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 1; i <= n; ++i) {
        s += ((i&1) ? "I hate " : "I love ");
        s += ((i!=n)?  "that "  :   "it "  );
    }
    cout << s;
    return 0;
}
