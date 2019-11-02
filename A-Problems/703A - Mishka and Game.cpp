    #include <iostream>
     
    using namespace std;
     
    int main() {
        int n, x, y, cnt=0;
        cin >> n;
        while (n--) {
            cin >> x >> y;
                 if (x>y) ++cnt;
            else if (x<y) --cnt;
        }
        
        if (cnt)
            cout << (cnt > 0 ? "Mishka" : "Chris");
        else
            cout << "Friendship is magic!^^";
        return 0;
    }
