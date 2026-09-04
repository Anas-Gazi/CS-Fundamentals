#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
 int sere=0, dima = 0;
    
    for(int i=0; i<n; i++){
     int left = v.front();
     int right = v.back();

     int mx = max(v.front(), v.back());
     if(i%2 ==0){
        sere +=mx;
     }else{
        dima +=mx;
     }
     if(mx==left){
        v.erase(v.begin());
     }else{
        v.pop_back();
     }
    }
    cout << sere << " " << dima;
    
     return 0;
}

// This code reads an integer `n` and a vector of integers `v` of size `n`. It simulates a game where two players, Sereja and Dima, take turns picking the maximum value from either end of the vector. The first player (Sereja) starts first, and they alternate turns. The code keeps track of the total scores for both players and outputs their final scores after all elements have been picked.

//problem link: https://codeforces.com/problemset/problem/381/A