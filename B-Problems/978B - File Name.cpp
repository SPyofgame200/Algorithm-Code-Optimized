    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n, cnt = 0;
        cin >> n;
        
        char c;
        string sub;
        while (n--) {
            cin >> c;
            
            if (c == 'x')
                sub = sub + 'x';
            else
                sub = "";
                
            if (sub.size() > 2) ++cnt;
        }
        cout << cnt;
        
        return 0;
    }
