#include<stdio.h>
int main()
{
  int n,c,search,count=0;
  count++;
  printf("Enter the limit :");
  scanf("%d",&n);
  int arr[n];
  printf("Enter The Elements :");
  for(c=0;c<n;c++)
  {
    scanf("%d",&arr[c]);
    count++;
  }count++;
  printf("Enter the number to search: ");
  scanf("%d",&search);
  for(c=0;c<n;c++)
  {
    count++;
    if(arr[c]==search)
    { 
      printf("%d Search Element is found ! ! ",search);
      count++;
      break;
    }count++;
    if(c==n)
    {
      printf("%d search Element is not found ! ! ",search);
      count++;
      
    }count++;
    
  }count++;  
   printf("\nTime Complexity = %d\n",count);
   printf("Space Complexity = %d\n" ,16 + 4*n);
   return 0;
 }
 
  
