#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int count =0;
    int len = s.size();
    for( int i=0; i<len ; i++){
      if(s[i] != t[i]){
        count ++;
      }
    }
    cout << count;

       return 0;
}