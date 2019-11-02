    #include <iostream>
    #include <vector>
     
    using namespace std;
     
    #define FastIO ios::sync_with_stdio(NULL),cin.tie(NULL),cout.tie(NULL)
     
    #define pb push_back
    #define mp make_pair
     
    typedef pair<int, int> pi;
    typedef vector<int> vi;
    typedef vector<pi> vpi;
     
    int main() {
        int n, m;
        cin >> n >> m;
        
        int psa[m+2] = {}, l, r;
        for (int i = 1; i <= n; ++i) {
            cin >> l >> r;
            ++psa[l];
            --psa[r+1];
        }
        
        vi ans;
        for (int i = 1; i <= m; ++i) {
            psa[i] += psa[i-1];
            if (psa[i] == 0) {
                ans.pb(i);
            }
        }
        
        cout << ans.size() << endl;
        if (ans.size())
            for (int i = 0; i < ans.size(); ++i) {
                cout << ans[i] << " ";
            }
        return 0;
    }
