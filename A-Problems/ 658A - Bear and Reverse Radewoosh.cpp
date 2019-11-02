    #include <iostream>
    #include <algorithm>
     
    using namespace std;
     
    const int MAXN = 1e4 + 14;
     
    int n, c, clock;
    int score[MAXN], time[MAXN];
    int Limak = 0, Radewoosh = 0;
     
    void inp() {
        cin >> n >> c;
     
        for (int i = 0; i < n; ++i) cin >> score[i];
        for (int i = 0; i < n; ++i) cin >> time[i];
    }
     
    void out() {
        if (Limak == Radewoosh) cout << "Tie";
        else cout << ((Limak > Radewoosh) ? "Limak" : "Radewoosh");
    }
     
    void Limak_role() {
        clock = 0;
        for (int i = 0; i < n; ++i) {
            clock += time[i];
            Limak += max(0, score[i] - c * clock);
        }
    }
     
    void Radewoosh_role() {
        clock = 0;
        for (int i = n - 1; i >= 0; --i) {
            clock += time[i];
            Radewoosh += max(0, score[i] - c * clock);
        }
    }
     
    int main() {
        inp();
     
        Limak_role();
        Radewoosh_role();
     
        out();
        return 0;
    }
