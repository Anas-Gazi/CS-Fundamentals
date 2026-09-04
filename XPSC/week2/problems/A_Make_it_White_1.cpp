#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
      int n; cin>> n;
      string s;
      int pos1= -1;
      int pos2 =-1;

      for(int i=1; i<=n; i++){
        cin >> s[i];
      }


      for(int i=1; i<=n; i++){ 
        if(s[i] == 'B'){ 
          pos1= i;
          break;
        }
      }
      for(int i=n; i>=0; i--){
        if(s[i] == 'B'){
          pos2= i;
          break;
        }
      }
    cout << pos2-pos1+1 << endl;

    }
    
     return 0;
}

// This code reads a number of test cases `t`, and for each test case, it reads an integer `n` and a string `s` of length `n`. It then finds the first and last occurrence of the character 'B' in the string and calculates the distance between these two positions (inclusive). Finally, it outputs this distance for each test case.

//problem link: https://codeforces.com/problemset/problem/1927/A