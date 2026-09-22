#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a>> b;
  // 1st process
  // int x= (a-b);
  // if(x%2 ==0) cout << x/2;
  // else cout << -1;

  int y= a+b;
  if(y%2 ==0){
    int half = y/2;
    cout <<a- half << endl;
  } else cout << -1;

   
    
     return 0;
}