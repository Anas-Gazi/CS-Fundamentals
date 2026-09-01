#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while (t--){
      int n; cin >> n;
      int a[2*n];
    int sum=0;
      for(int i=0; i<2*n; i++){
        cin >> a[i];
      }

      int i=0; 
      int j= 2*n-1;
      while(i<n){
        int mx= max(a[i], a[j]);
        sum += mx;
        i++;
        j--;
      }
      cout << sum << endl;

    }

       return 0;
}