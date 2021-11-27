/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <conio.h>
void main()
{
    int sum=0;
    float average;
    int arr[10],i;
    printf("enter the elements of the array");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=9;i++)
    {
        sum=sum+arr[i];
        average=sum/10;
    }
    printf("%f average of the elemts of the array is",average);
}
    
