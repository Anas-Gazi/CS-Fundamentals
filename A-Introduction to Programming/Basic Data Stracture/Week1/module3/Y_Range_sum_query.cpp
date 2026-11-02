#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin>>n >> q;
    vector<long long int> v(n+1);
    for(int i= 1; i<=n; i++){
      cin >> v[i];
    }


    vector<long long int> pre(n+1);
    pre[1] = v[1];
    for(int i=2; i<=n; i++){
      pre[i] = pre[i-1] + v[i]; // this is the prefix sum array where pre[i] stores the sum of elements from index 1 to i
    }

    while(q--){ 
      int l,r;
      cin>> l >> r;
      long long int sum ;
      
      if(l== 1){
        sum = pre[r]; // if l is 1, then the sum from index 1 to r is simply pre[r]
      }else{
        sum = pre[r] - pre[l-1]; // if l is greater than 1, then the sum from index l to r is pre[r] - pre[l-1]
      }
       cout << sum << endl;

    }
       return 0;
}
// this code is for range sum query using prefix sum array. It first takes the input of n (size of array) and q (number of queries). Then it reads the elements of the array into vector v.
// It then constructs a prefix sum array pre, where pre[i] stores the sum of elements from the start of the array up to index i. For each query, it reads the left and right indices (l and r) and calculates the sum of elements in that range using the prefix sum array. If l is 1, it directly takes pre[r] as the sum; otherwise, it computes the sum as pre[r] - pre[l-1]. Finally, it outputs the result for each query.