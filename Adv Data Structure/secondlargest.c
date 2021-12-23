#include<stdio.h>

void main()
{
    int n=5,k,j,temp;
    int a[5]={100,80,90,20,40};

    printf("Sorting Started\n");
    for(k=1;k<=n-1;k++)
    {
        for(j=0;j<=(n-k-1);j++)     //2 => 0 to 2 =3
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }

        }
    }
    printf("largest element is =%d\n",a[n-1]);
    printf("second largest element is =%d\n",a[n-2]);
    printf("smallest element is =%d\n",a[0]);
    printf("second smallest element is =%d\n",a[1]);
}
