# array-programs
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
