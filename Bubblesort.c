#include<stdio.h>
int main()
{
   int c,d,n,swap,count=0;
   count++;
   printf("\nEnter the limit: ");
   scanf("%d", &n);
   int arr[n];
   printf("\nEnter the elements: ");
   for(c=0;c<n;c++)
   {
     scanf("%d", &arr[c]);
     count++;
   }
   count++;
   for(c=0;c<n-1;c++)
 	{
 	for(d=0;d<n-c-1;d++)
 		{ 
 		   if(arr[d]>arr[d+1])
 		   {
 		   	swap=arr[d];
 		   	arr[d]=arr[d+1];
 		   	arr[d+1]=swap;
 		   	count++;
 		   }	
 		   count++;
                }
                count++;
       }count++;
        printf("\nSorted Array in ascending order :\n");
        for(c=0;c<n;c++)
        {
        printf("%d\n",arr[c]);
        count++;
        }count++;
        
        printf("Time Complexity = %d\n",count);
        
        printf("Space Complexity = %d\n" ,20 + 4*n);
 	return 0;
 }
 
                 
                
