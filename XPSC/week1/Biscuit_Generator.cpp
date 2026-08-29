#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,t;
    cin>>a >> b >> t;
    int count = 0;
    for(int i=1; i<=t+.5; i++){
      if(a*i <=t+.5){
        count++;
      }
    }
    cout <<b*count << endl;

       return 0;
}