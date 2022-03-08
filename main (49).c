/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void
main ()
{
  int arr[10], i, j;
  int temp;
  printf ("enter the elements in the array");
  for (i = 0; i <= 9; i++)
    {
      scanf ("%d", &arr[i]);
    }
  for (i = 0; i <= 9; i++)
    {
      for (j = 0; j <= 8 - i; j++)
	{
	  if (arr[j] > arr[j + 1])
	    {
	      temp = arr[j + 1];
	      arr[j + 1] = arr[j];
	      arr[j] = temp;
	    }
	}
      for (i = 0; i <= 9; i++)
	{
	  printf (" %d", arr[i]);
	}
    }
}
