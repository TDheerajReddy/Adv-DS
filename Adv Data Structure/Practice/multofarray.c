//Multiplication of 2 Array
#include<stdio.h>
void main()
{
  int a[50][50],b[50][50],c[50][50],i,j,k,n1,m1,n2,m2;
  printf("enter number of row array a=");
  scanf("%d",&n1);
  printf("enter number of column array a=");
  scanf("%d",&m1);

  printf("enter number of row in array b=");
  scanf("%d",&n2);
  printf("enter number of column array b=");
  scanf("%d",&m2); 

  if(m1==n2)
  {
    printf("enter element in array a=");   
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m1;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }

    printf("enter element in array b=");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<m2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            c[i][j]=0;
            for(k=0;k<m2;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");  
    }
  }    
  else
  {
      printf("both array are not same");
  }
}