    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
     
        string table0 = "pgbory";
        string table1[] = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};
        for (int i = 0; i < n; ++i) {
            string t;
            cin >> t;
            for (int j = 0; j < 6; ++j) {
                if (t[0] == table0[j]) {
                    table0[j] = '1';
                    break;
                }
            }
        }
     
        cout << 6 - n << endl;
        for (int i = 0; i < 6; ++i) {
            if (table0[i] != '1') {
                cout << table1[i] << endl;
            }
        }
        return 0;
    }
