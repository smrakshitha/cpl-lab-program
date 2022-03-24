#include<stdio.h>
int main()
{
   inta[10][10],b[10][10],c[10][10]
   int m,n,p,q;
   int i,j,k;

  //input the order of matrix A - M x N
  printf("enter the order of matrix A :");
  scanf("%d%d",&m,&n);
 
  //input the order of matrix B - p x q
  printf("enterb the order of matrix B:");
  scanf("%d%d",&p,&q);

  if(n!=p)
  {

     printf("number of columns of matrix A is not equal to numder of rows of matrix B\n");
     printf("multiplication of matrices not possible.....\n");
     return(-1);

   }
  
    //input the elements into matrix A
    printf("\nenter %d elements into matrix A :",m*n);
    for(i=0;i<n;i++)
       for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);

    //display matric A in matric formate 
    printf("\nthe matrix A is .....\n");
    for(i=0;i<m;i++)
    {
  
         for(j=0;j<n;j++)
         {
           
              printf("%d\t",a[i][j]);
      
          }
          printf("\n");

     }
  
    printf("\nenter %d elements into matrix B :",p*q);
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
           scanf("%d",&b[i][j]);

    printf("\nthe matrix B is.....\n");
    for(i=0;i<p;i++)
   { 

      for(j=0;j<q;j++)
      { 
         printf("%d\t"b[i][j]);
       
      }
      printf("\n");
   }

   for(i=0;i<m;i++)
   {

      for(j=0;j<q;j++)
      {

         c[i][j] = 0;
         for(k=0;k<n;k++)
         {

             c[i][j] = c[i][j] + (a[i][k] * b[k][j]);

          }
       }
    }

     printf("\nthe product matrix is......\n\n");
     for(i=0;i<n;i++)
     {

        for(j=0;j<q;j++)
        {

             printf("%d\t",c[i][j]);
         }
         printf("\n");
      }

      return 0;
}
       
