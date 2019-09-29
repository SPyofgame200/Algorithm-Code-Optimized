#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int color[4], cnt=3;
    for (int i = 0; i < 4; ++i) {
        cin >> color[i];
    }
    sort(color, color+4);
    for (int i = 0; i < 3; ++i) {
        if (color[i]!=color[i+1]) --cnt;
    }
    cout << cnt;
    return 0;
}
