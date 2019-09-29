#include <iostream>
#include <algorithm>
#include <string>
 
using namespace std;
 
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
 
int main() {
    int arr[50];
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i+=2) {
        arr[i/2]=s[i]-48;
    }
    qsort(arr,s.size()/2+1,sizeof(int),compare);
    for (int i = 0; i < s.size()-1; i+=2) {
        cout << arr[i/2] << "+";
    }
    cout << arr[s.size()/2];
    return 0;
}
