#include <iostream>
#include <algorithm>
 
using namespace std;
 
int compare (const void * a, const void * b) {
  return ( *(short*)b - *(short*)a );
}
 
int main() {
    short n,s=0,t=0,count=0;
    cin >> n;
    short arr[n];
    for (short i = 0; i < n; ++i) {
        cin >> arr[i];
        s+=arr[i];   
    }
    qsort (arr, n, sizeof(short), compare);
    while (t-1<s/2) {
        t+=arr[count];
        count++;
    }
    cout << count;
    return 0;
}
