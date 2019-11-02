#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

#define FastIO ios::sync_with_stdio(NULL),cin.tie(NULL),cout.tie(NULL)
#define FOR(i,l,r) for(int i = (int)l; i <= (int)r; ++i)

#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<pi> vpi;

int main() {
    int n;
    cin >> n;

    vpi score(n);
    int thomas;
    FOR(i,0,n-1) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        score[i] =  {a + b + c + d, i + 1};
        if (i == 0)
            thomas = a + b + c + d;
    }

    sort(score.rbegin(),score.rend());
    FOR(i,0,n-1) {
        if (score[i].first == thomas) {
            cout << i + 1;
            break;
        }
    }

    return 0;
}
