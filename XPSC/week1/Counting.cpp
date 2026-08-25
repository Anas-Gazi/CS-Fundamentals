#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a >> b;
    int sum =0;
    if(a<b){

     for(int i=a; i<=b ; i++){
     sum ++;
    }
    cout << sum;
    }else{
      cout << 0;
      
    }


       return 0;
}