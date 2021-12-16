#include<stdio.h>
int main()
{
  int c,n,first,second,last,search,mid,count=0;
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
  printf("Enter the value to find : ");
  scanf("%d",&search);
  first=0;
  second=n-1;
  mid=(first+last)/2;
  while(first<=last)
   {
     count++;
     if(arr[mid]<search)
     {
      first=mid+1;
      count++;
     
     }count++;
    
      else if(arr[mid]==search)
     {
       printf("%d; Element is found ! ! ",search);
       count++;
       break;
     }count++;
     else
     {
       last=mid-1;
       mid=(first+last)/2;
       count++;
     }count++;
     if(first>last)
     {
       printf("%d; Element is'nt found ! ! ",search);
       count++;
     }count++;
     
    }count++; 
    
    printf("\nTime Complexity = %d\n",count);
    printf("Space Complexity = %d\n" ,28 + 4*n);
    return 0;
  } 
