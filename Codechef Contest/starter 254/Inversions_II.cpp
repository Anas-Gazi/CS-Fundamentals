#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t; while(t--){
	    long long  n; cin >> n;
	    
	    int arr1[n];
      int arr2[n];

	    long long sum =0;
	    for(int i=1; i<n; i++){
	        cin >> arr1[i];
	    
	    for(int j=i+1; j<n; j++){
	        cin >> arr2[j];
	        
	        if ( arr1[i] >arr2[j]){
	           
	           sum = sum + arr1[i] + arr2[j];
	        }
	       
	    }
	    }
	     cout << sum;
	    
	}

}
