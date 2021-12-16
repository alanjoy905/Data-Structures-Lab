#include<stdio.h>
int main()
{
  int n,c,d,t,pos,count=0;
  count++;
  printf("Enter the limit :");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements :");
  for(c=0;c<n;c++)
  {
    scanf("%d",&arr[c]);
    count++;
    
  }
  for(c=0;c<n-1;c++)
  {
    pos=c;
    count++;
    for(d=c+1;d<n;d++)
    {
      if(arr[pos]>arr[d])
      pos=d;
      count++;
      
    }count++;
    if(pos!=c)
    {
      t=arr[t];
      arr[t]=arr[pos];
      arr[pos]=t;
      count++;
      
    }count++;
    
  }count++;
  printf("\nSorted array in ascending order :\n");
  for(c=0;c<n;c++)
  {
    ("%d\n",arr[c]);
    count++;
    
  } count++;
  
   printf("Time Complexity = %d\n",count);
   printf("Space Complexity = %d\n" ,24 + 4*n);
   return 0;
  }
