#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }

    for (int i =n-1; i>=0; i--){

          if(i%2!=0){
          printf("%d ",arr[i]);
        }

    }

        return 0;
}

// This code takes an array of size n, and then prints the elements at odd indices in reverse order. Finally, it prints the modified array.

// The output of this code will be the elements at odd indices in reverse order. For example, if the input array is [1, 2, 3, 4, 5], the output will be [4, 2].