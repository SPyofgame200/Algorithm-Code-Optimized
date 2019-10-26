    #include <iostream>
     
    using namespace std;
     
    int main() {
        int q, cnt=0;
        cin >> q;
        
        while (q--) {
            string s;
            cin >> s;
            
            switch(s[0])
            {
                case 'T': 
                        cnt+=4; 
                        break;
                case 'C':
                        cnt+=6;
                        break;
                case 'O':
                        cnt+=8;
                        break;
                case 'D':
                        cnt+=12;
                        break;
                case 'I':
                        cnt+=20;
                        break;
            }
        }
        
        cout << cnt;
        return 0;
    }
