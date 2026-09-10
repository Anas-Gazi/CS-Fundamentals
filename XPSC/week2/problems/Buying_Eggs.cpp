#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, y, f;
    cin >> x >>y >> f;
    int a= 12*x;
    int b= 12*y +f;
    if(a>b)  cout << b << endl;
    else  cout << a << endl;
    
     return 0;
}