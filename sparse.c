    #include <stdio.h>  
    int main() 
  { 
     int row,col,i,j,a[10][10],count = 0;
     printf("Enter row  :");
     scanf("%d",&row);
     printf("Enter Column  :");
     scanf("%d",&col);
     printf("Enter Element of Matrix1  :");
     for(i = 0; i < row; i++)
    {
   
      for(j = 0; j < col; j++)
      {
         scanf("%d",&a[i][j]);
      }
    }
        int size = 0;  
        for(int i=0; i<row; i++)  
        {  
            for(int j=0; j<col; j++)  
            {  
                if(a[i][j]!=0)  
                {  
                    size++;  
                }  
            }  
        }  
         int matrix[3][size];   
         int t=0;  
        for(int i=0; i<row; i++)  
        {  
            for(int j=0; j<col; j++)  
            {  
                if(a[i][j]!=0)  
                {  
                    matrix[0][t] = i;  
                    matrix[1][t] = j;  
                    matrix[2][t] = a[i][j];  
                    t++;  
                }  
           }  
        }   
        for(int i=0 ;i<row; i++)  
        {  
            for(int j=0; j<size; j++)  
            {  
                printf("%d ",matrix[i][j]);  
                printf("\t");  
            }  
            printf("\n");  
        }  
        return 0;  
    }  
