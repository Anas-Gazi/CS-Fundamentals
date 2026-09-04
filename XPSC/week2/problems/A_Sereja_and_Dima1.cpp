#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    deque<int> dq(n);
    for(int i=0; i<n; i++){
      cin >> dq[i];
    }

    int sereja=0, dima=0, who=1;
    while(!dq.empty()){
      int left= dq.front(), right = dq.back(), mx;

      mx = max(left, right);

      if(who %2 !=0){
        sereja +=mx;
      }
      else{
        dima += mx;
      }
      if(mx== left){
        dq.pop_front();
      }else{
        dq.pop_back();
      }
      who++;
    }
    cout << sereja << " " << dima;

     
     return 0;
}

// This code reads an integer `n` and a deque of integers of size `n`. It simulates a game where two players, Sereja and Dima, take turns picking the maximum value from either end of the deque. The first player (Sereja) starts first, and they alternate turns. The code keeps track of the total scores for both players and outputs their final scores after all elements have been picked.

//problem link: https://codeforces.com/problemset/problem/381/A