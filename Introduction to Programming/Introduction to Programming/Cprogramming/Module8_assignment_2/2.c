#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int v;
        int sum1=0, sum2=0;
    for (int i=0;i<n;i++){
      scanf("%d",&v);

      if(v>0){
        sum1 = sum1+v;
      }
      else if(v<0){
        sum2 = sum2+v;
      }
    }

    printf("%d %d", sum1, sum2);
    return 0;
}
