#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    pair<string,pair<int, string>>p= {"Anas", {10, "01616"}};

    string name = p.first;
    int roll = p.second.first;
    string phnnumber = p.second.second;

    cout <<name << " " << roll << " " << phnnumber << endl;


     return 0;
}