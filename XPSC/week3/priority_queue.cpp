#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;

     return 0;
}