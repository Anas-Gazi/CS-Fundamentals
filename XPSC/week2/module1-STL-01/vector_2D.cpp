#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin >>n >>m;


    vector<vector<int>> c(n, vector<int>(m,0));

    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        cin >> c[i][j];
      }
    }

        for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
        cout << c[i][j]  << " ";
      }
      cout <<endl;
    }
    

     return 0;
}