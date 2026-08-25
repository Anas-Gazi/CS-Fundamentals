#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int a= 1;
    int flag =0;
    for(int i=0; i<5; i++){
      if(a == arr[i] ){
        flag = 1;
        break;
      }else{
        flag = 0;
      }
    }
    if (flag ==1) cout << " Found";
    else cout << "Not Found";
       return 0;
}