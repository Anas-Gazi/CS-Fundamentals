#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s= "My name is Anas";
    cout<< s.size() << " "<< s.max_size() << endl;
    s.resize(5) ;
    cout<< s.capacity() << " "<< s << endl;
       return 0;
}