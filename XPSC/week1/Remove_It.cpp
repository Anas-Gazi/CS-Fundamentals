#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int x;
    cin >> x;
    for(int i=0; i<n; i++){
      cin >> arr[i];
      if(arr[i] != x){
        cout << arr[i] << " ";
      }
    }

       return 0;
}