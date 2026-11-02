#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin >> n;
      string s;
      cin >> s;

      int ind = -1;
      
      
      for(int i =0; i<n; i++){
        if(s[i] == 'z'){
          ind = i;
          break;
        }
      }
      if(ind == -1){
        cout << s << endl;
        continue;
      }else{
      while( ind <n){
        if(s[ind] == 'z'){
          s[ind ] ='a';
          ind ++;
        }else{
          break;
        }
      }
      cout << s << endl;
    }
      
    }


       return 0;
}

