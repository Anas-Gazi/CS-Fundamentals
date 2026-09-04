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
      cin >> s;
      int pos1= -1;
      int pos2 =-1;

      int left = s.find('B'); // Find the first occurrence of 'B'
      int right = s.rfind('B'); // Find the last occurrence of 'B'
      cout << right - left +1 << endl;
    }
     return 0;
}

// This code reads a number of test cases `t`, and for each test case, it reads an integer `n` and a string `s` of length `n`. It then finds the first and last occurrence of the character 'B' in the string using `find` and `rfind` methods, and calculates the distance between these two positions (inclusive). Finally, it outputs this distance for each test case.


//problem link:https://codeforces.com/problemset/problem/1927/A