#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--){
      int a,b,c;
      cin >> a >> b >>c;
      int count = 0;
      while(a != b && a!=c && b!=c){
        
        if(a>= b && a>=c) a--;
        else if( b>= a && b>=c) b--;
        else c--;

        if(a<= b && a<=c) a++ ; 
        else if( b<= a && b<=c) b++;
        else c++;
        count ++;
      }
      cout << count << endl;
    }

       return 0;
}