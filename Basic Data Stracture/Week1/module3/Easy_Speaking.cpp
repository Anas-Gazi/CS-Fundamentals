#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while (t--){
	    int n;
	    cin >>n;
	    string a;
	    cin >>a;
	    
	    int cnt =0;
	    int flag = false;
	    for(int i=0; i<n; i++){
	        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
	            cnt =0;
	        }else{
	            cnt ++;
	        }
	        if (cnt >=4) flag = true;
	    }
	    if (flag == true) cout << "Yes" << endl;
	    else cout <<"NO" << endl;
	}

}
