#include<stdio.h>
void main()
{
 int n,i,f=0;
 printf("Enter a Number:\t");
 scanf("%d",&n);
 for(i=2;i<n-1;i++)
 {
     if(n%i==0)
     {
         f=1;
     }
 }
 if(f==0)
 {
     printf("prime");
 }
 else 
 {
     printf("not-prime");
 }
}