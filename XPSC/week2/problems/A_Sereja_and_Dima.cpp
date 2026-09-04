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