    #include <iostream>
     
    using namespace std;
     
    int main() {
        string s;
        int cnt = 0;
        cin >> s;
        for (int i = 0; i < s.size(); ++i) 
            cnt += s[i] == 'a';
        
        if (cnt > s.size() / 2)
            cout << s.size();
        else
            cout << 2 * cnt - 1;
        return 0;
    }
