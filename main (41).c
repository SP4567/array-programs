/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void main()
{
    int arr[11],i;
    printf("enter elements in the array");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=0;i<=10;i++)
    {
    if(arr[i]>max)
    max=arr[i];
    }
        printf("max value is %d",max);
    }
