#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
  //  tuple<string, int , string> t = make_tuple("Rahim", 10, "KIre ");
  tuple<string, int , string> t = {"Rahim", 10, "KIre "};
  // cout << get<0>(t)<< " " << get<1>(t) << " "<< get<2>(t);

  auto[name, roll, emni]= t;
  cout << name << " " << roll <<" " << emni<< endl;
     return 0;
}