#include <bits/stdc++.h>

using namespace std;



int main()
{
    // Write your code here
    
    int n,m,x;
    
    cin >> n;
    int a[n];


    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cin >> m;
    int b[m];
    for(int i=0; i<m; i++){
        cin >> b[i];
    }


    cin >> x;

 vector <int> arr;
 for(int i=0; i<x; i++){
    arr.push_back(a[i]);
 }
 for(int i=0; i<m; i++){
    arr.push_back(b[i]);
 }
 for(int i=x; i<n; i++){
    arr.push_back(a[i]);
 }
 
 for(int i=0; i<n+m; i++ ){
    cout << arr[i] <<" ";
 }
    
    
    return 0;
}
