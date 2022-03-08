/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[11],i,first=0,last=0,mid;
    printf("enter the elements in the array");
    for(i=0;i<=10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the value to be searched");
    int val;
    scanf("%d",&val);
    for(i=0;i<=9;i++)
    {
        if(first<=last)
        {
            mid=(first+last)/2;
            if(arr[mid]==val)
            printf(" %d",mid);
            if(val>arr[mid])
            first=mid+1;
            else 
            last=mid+1;
            break;
        }
    }
    printf("%d",val);
}