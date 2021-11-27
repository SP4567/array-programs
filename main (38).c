/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[10],i,flag=0;
    printf("enter the elements in the array");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value to be searched");
    int val;
    scanf("%d",&val);
    for(i=0;i<=9;i++)
    {
        if(arr[i]==val)
        {
        flag++;
        printf("at location %d,%d",i,val);
        break;
        }
    }
    if(flag==0)
    {
        printf("not found");
    }
}