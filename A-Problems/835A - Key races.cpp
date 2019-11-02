    #include <iostream>
     
    using namespace std;
     
    int main() {
        int s, v1, v2, t1, t2;
        cin >> s >> v1 >> v2 >> t1 >> t2;
        
        t1 = s * v1 + 2 * t1;
        t2 = s * v2 + 2 * t2;
        
        if (t1 != t2)
            cout << (t1 < t2 ? "First" : "Second");
        else
            cout << "Friendship";
        return 0;
    }
