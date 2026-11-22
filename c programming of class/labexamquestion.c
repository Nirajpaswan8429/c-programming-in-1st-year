#include <stdio.h>
void main()
{
    int i , j , a[3][3] , s , sum=0;
    printf("enter the element of the matrix a:");
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d" , &a[i][j]);
        }
    }

    // calculation of sum of primary diagonal of the matrix

    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            if(i==j)
            {
                s=a[i][j];
                sum=sum+s;
            }
        }
    }
    printf("sum of the primary diagonal=%d" , sum);
}
