/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
void main()
{
    int arr[3][3],i,j;
    printf("enter elements in the array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("matrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
    printf("transpose \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %d",arr[j][i]);
        }
        printf("\n");
    }
}
