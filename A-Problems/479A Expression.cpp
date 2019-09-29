#include <iostream>
 
using namespace std;
 
int main() {
    short a,b,c,max;
    cin >> a >> b >> c;
    max = a+b+c;
    max = (max >  a+b*c ) ? max :  a+b*c ;
    max = (max >  a*b+c ) ? max :  a*b+c ;
    max = (max >  a*b*c ) ? max :  a*b*c ;
    max = (max > (a+b)*c) ? max : (a+b)*c;
    max = (max > a*(b+c)) ? max : a*(b+c);
    cout << max;
    return 0;
}
