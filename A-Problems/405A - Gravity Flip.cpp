#include <iostream>
#include <algorithm>

using namespace std;

int compare (const void * a, const void * b) {
  return ( *(int*)a - *(int*)b );
}

int main() {
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    qsort(arr, n, sizeof(int), compare);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}
