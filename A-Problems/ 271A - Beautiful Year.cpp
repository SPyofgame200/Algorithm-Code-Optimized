#include <iostream>
 
using namespace std;
 
bool dif(short t) {
    short a = t/1000;
    short b = (t%1000)/100;
    short c = (t%100)/10;
    short d = t%10;
    return ( (a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d) );
}
 
int main() {
    short t,y;
    cin >> y;
    t=y+1;
    while (!dif(t)) t++;
    cout << t;
    return 0;
}
