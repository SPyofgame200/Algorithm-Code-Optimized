    #include <iostream>
    #include <algorithm>
     
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        sort(arr, arr+n);
        int sum = 0;
        for (int i = 0; i < n; i += 2) {
            sum += arr[i+1] - arr[i];
        }
        
        cout << sum;
        return 0;
    }
