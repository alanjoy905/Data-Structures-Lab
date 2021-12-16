#include<stdio.h>
struct poly
   {
     int coeff;
     int exp;
   };
     struct poly a[10];
     int main()
    {
     int deg;
     printf("Enter the highest degree of polynomial:");
     scanf("%d", &deg);
     int k = 0;
     for (int i = 0;i<=deg ;i++)
     {
       printf("\n Enter the coeff of x raise to %d :",i);
       scanf("%d", &a[i].coeff);
       a[k++].exp = i;
     }
       printf("\n Expression : %d",a[0].coeff);
       for(int i=1; i<=deg;i++)
       {
         printf("+ %dx raise to %d",a[i].coeff,a[i].exp);
         }
      return 0;
    }
