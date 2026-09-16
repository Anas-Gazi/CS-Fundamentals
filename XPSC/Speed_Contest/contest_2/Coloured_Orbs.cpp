#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, b;
    cin >> r  >> b;

    int g= min(r,b);
    
    if(r== g){
      r=0;
    }
    else if( b==g){
      b=0;
    }
    if(r>=g) r= r-g;
    else if (b>=g)b=b-g;
    cout <<g*5+r*1+ b*2;
    
     return 0;
}