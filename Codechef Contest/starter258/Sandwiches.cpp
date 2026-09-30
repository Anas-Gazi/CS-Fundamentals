#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;
    
    if( a< (b+c)) cout << a/2 << endl;
    else if(a > (b+c)) cout << a/2 << endl;
    else if( a == (b+c)) cout << a << endl;
     return 0;
}