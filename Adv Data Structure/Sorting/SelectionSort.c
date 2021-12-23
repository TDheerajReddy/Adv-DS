#include<stdio.h>

void main()
{
    int n=5,i,j,temp;
    int a[]={5,6,1,8,2};

    printf("Sorting Started");
    for(i=0;i<n-1;i++)                  //5 Times
    {
        for(j=i+1;j<n;j++)              //4 Times
        {
            if(a[i]>a[j])               //Ascending Order
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nPrinting Sorted Array:\n");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
