/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10],i;
    int max=0;
    int min=0;
    printf("enter the elemets of the array");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(arr[i]>max)
        if(arr[i]<min)
        max=arr[i];
        min=arr[i];
    }
        printf("maximum number is %d",max);
        printf("\nminimum number is %d",min);
        
}
    
