#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    vector<int> B(n);

    for(int i=0; i<n; i++){
      cin >> A[i];
    }
        for(int i=0; i<n; i++){
      cin >> B[i];
    }

    vector<int> C(n+n);

    for(int i=0; i<n; i++){
      C[i] = B[i];
    }
    for(int i=0; i<n; i++){
      C[n+i] = A[i];
    }
    for (int i = 0; i <n+n; i++) {
        printf("%d ", C[i]);
    }
    

       return 0;
}