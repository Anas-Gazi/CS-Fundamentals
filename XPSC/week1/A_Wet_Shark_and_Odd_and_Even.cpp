#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long x;
    long long sum =0;
    long long sodd=LLONG_MAX;
    for(int i=0; i<n; i++){
      cin >>x;
      sum = sum+x;
    if(x%2 !=0){
         sodd= min(sodd, x);
    }
    }

    if(sum%2 ==0) cout << sum << endl;
    else cout << sum-sodd << endl;

       return 0;
}