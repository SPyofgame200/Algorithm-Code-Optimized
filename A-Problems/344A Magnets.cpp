#include <iostream>
 
using namespace std;
 
int main() {
    int n,tmp,pred,count=1;
    cin >> n >> tmp;
    pred = tmp;
    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp != pred) {
            ++count;
            pred = tmp;
        }
    }
    cout << count;
    return 0;
}
