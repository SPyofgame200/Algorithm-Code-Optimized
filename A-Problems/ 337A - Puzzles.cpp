#include <iostream>
#include <algorithm>
 
using namespace std;
 
int main() {
    int k, n;
    cin >> k >> n;
 
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
 
 
    sort(arr, arr + n);
    int min_s = 1e9;
    for (int i = 0; i < n-k+1; ++i) {
       min_s = min(min_s, (arr[k+i-1]-arr[i]));
    }
 
    cout << min_s;
    return 0;
}
