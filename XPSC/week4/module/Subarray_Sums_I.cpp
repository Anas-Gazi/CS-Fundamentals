#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin >> n >> x;
    int a[n];
   
    for(int i=0; i<n; i++){
      cin >> a[i];
    }
   int sum=0, cnt =0, l=0;
    for(int r=0; r<n; r++){
      sum +=a[r];
      while(sum>x){
        sum -=a[l];
        l++;
      }
      if(sum ==x){
        cnt ++;
      }
      
    }
    cout << cnt << endl;

     return 0;
}