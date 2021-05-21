#include<stdio.h>
void main()
{
     int arr[10];
     int i=0,larg=0;
     printf("Enter Elements of array:");
     for(i=0;i<10;i++)
     scanf("%d",&arr[i]);
         larg=arr[0];
    for(i=0;i<10;i++)
    {if(arr[i+1]>larg)
        larg=arr[i+1];
     }

     printf("\n The Largest  Element from Array Elements is : %d",larg);
}
