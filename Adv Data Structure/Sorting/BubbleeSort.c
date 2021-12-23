//Bubble Sort in C
#include<stdio.h>

void main()
{
    int n=5,k,j,temp;
    int a[5]={100,80,90,20,10};

    printf("Sorting Started\n");
    for(k=1;k<=n-1;k++)
    {
        for(j=0;j<=(n-k-1);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    
    printf("Printing Sorted Array: \n");
    for(k=0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }
}