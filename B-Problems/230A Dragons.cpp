#include <iostream>
#include <vector>
#include <algorithm>
 
#define FastIO ios::sync_with_stdio(NULL),cin.tie(NULL),cout.tie(NULL)
#define FOR(i, l, r) for(int i = (int)l; i <= (int)r; ++i)
 
#define pb push_back
#define mp make_pair
 
using namespace std;
 
int main() {
    FastIO;
    int s, n, x, y;
    cin >> s >> n;
    vector< pair<int, int> > dragon;
    FOR(i, 0, n-1) {
            cin >> x >> y;
            dragon.pb(mp(x,y));
    }
    sort(dragon.begin(), dragon.end());
    FOR(i, 0, n-1) {
        if (s>dragon[i].first) {
            s+=dragon[i].second;
        }
        else {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
