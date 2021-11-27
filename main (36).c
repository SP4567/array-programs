/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int arr[10],i;
    for(i=0;i<=9;i++)
    {
        printf("enter the elements of the array");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        for(int j=0;j<=9-i;j++)
        if(arr[j]>arr[j+1])
        {
            int temp=arr[i];
            arr[i]=arr[j+1];
            arr[j+1]=temp;
        }
        printf("array in ascending order \n");
        for(i=0;i<=9;i++)
        printf(" %d",arr[i]);
    }
}