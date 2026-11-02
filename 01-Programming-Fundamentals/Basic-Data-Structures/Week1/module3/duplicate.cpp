#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    
    int n; cin>> n;
    int a[n];
    
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int flag = false;
     for(int i =0; i<n; i++){
        if(a[i] == a[i+1]){
            flag = true;
        }
    }
    if (flag ==true) cout <<"YES" <<endl;
    else cout <<"NO" << endl;
    
    
    

    return 0;
}
