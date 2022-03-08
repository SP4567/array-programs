/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[4][4],i,j;int array[4][4];int arr[4][4];
    printf("enter elements in the array");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
        printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
        scanf(" %d",&array[i][j]);
        }
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
        printf(" %d",array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            arr[i][j]=a[i][j]*array[i][j];
        }
    }
    printf("\n");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            printf(" %d",arr[i][j]);
        }
        printf("\n");
    }
}
    
    

    