/* C program to find sum of two matrices of size 3x3 */

#include <stdio.h>

int main()
{
    int A[3][3]={{1,2,3}, {14,15,16},{27,28,29}};
    int B[3][3]={{9,8,7},{6,5,4},{3,2,1}};
    int C[3][3];
    int row, col;
    /* C= A +B  */
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
           C[row][col] = A[row][col] + B[row][col];
        }
    }
   /*
     for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", A[row][col]);
        }
        printf("\n");
    }
     for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", B[row][col]);
        }
        printf("\n");
    }

*/

    /* Print the value of resultant matrix C */
    printf("\nSum of matrices A+B = \n");
    for(row=0; row<3; row++)
    {
        for(col=0; col<3; col++)
        {
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    return 0;
}
