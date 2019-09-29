#include <iostream>
#include <stdio.h>     
#include <stdlib.h>   
 
using namespace std;
 
int compare (const void * a, const void * b)
{
    return -( *(int*)a - *(int*)b );
}
 
int main ()
{
    int n,k,arr[50] = {};
    cin >> n >> k;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int count = 0;
    qsort (arr, n, sizeof(int), compare);
    for (int i = 0; i < n; ++i) {
        if ((arr[i] <= 0) || (arr[i] < arr[k-1])) break;
        ++count;
    }
    cout << count;
    return 0;
}
