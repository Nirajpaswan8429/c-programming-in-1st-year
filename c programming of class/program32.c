//write a program to enter two matrices of order 2*2 and multiply them //

#include <stdio.h>
void main()
{
    int i , j , k , a[2][2] , b[2][2] , c[2][2];
    printf("enter the element of the array a:\n");
    for(i=0; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }
    printf("enter the value of the array b:\n");
    for(i=0; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }
   
    for(i=0; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            c[i][j]=0;
            for(k=0 ; k<2 ;k++)
        {
            c[i][j] += a[i][k] * b[k][j];
        }
        
        


        }

    }
    printf("print the multiply of two matrics\n");
    for(i=0; i<2 ; i++)
    {
        for(j=0 ; j<2 ; j++)
        {
            printf("%d\t" , c[i][j]);
        }
        printf("\n");   
    }


}