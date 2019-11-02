    #include <iostream>
    #include <map>
     
    using namespace std;
     
    typedef map<string, int> database;
     
    int main() {
        int q;
        cin >> q;
     
        database name;
        while (q--) {
            string s;
            cin >> s;
     
            if (name.count(s)) {
                cout << "YES" << endl;
            }
            else {
                name[s] = 1;
                cout << "NO" << endl;
            }
        }
     
        return 0;
    }
