#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int n,x;
    cin >> n;
    int mem[4][n+1], team[4]={};
    for (int i = 1; i <= n; ++i) {
        cin >> x;
        mem[x][team[x]++]=i;
    }
    x = min(team[1],min(team[2],team[3]));
    cout << x << endl;
    for (int i = 0; i < x; ++i) {
        cout << mem[1][i] << " " << mem[2][i] << " " << mem[3][i] << endl;
    }
    return 0;
}
