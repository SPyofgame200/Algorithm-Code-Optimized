#include <iostream>

using namespace std;

int main() {
    int n, x, max=0, fred[101]={};
    cin >> n;
    
    while (n--) {
        cin >> x;
        ++fred[x];
    }
    
    for (int i = 1; i <= 100; ++i) {
        if (fred[i] > max) max = fred[i];
    }
    
    cout << max;
    return 0;
}
