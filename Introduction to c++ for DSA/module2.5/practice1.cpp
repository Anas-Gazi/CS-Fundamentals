#include <bits/stdc++.h>
using namespace std;

int* get_array(int n) {
  int* arr = new int[n];
  
  for(int i=0; i<n; i++){
    cin>> arr[i];
  }
  return arr ;
}

int main()
{
    int n;
    cin>>n;
  int* my_arr = get_array(n);
    for(int i=0; i<n; i++){
    cout<< my_arr[i] << " ";
  }
  delete[] my_arr;

       return 0;
}