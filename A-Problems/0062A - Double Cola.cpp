#include <iostream>
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    --n;
    while (n >= 5) {
        n -= 5;
        n /= 2;
    }
    
    string s[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    cout << s[n];
    return 0;
}
