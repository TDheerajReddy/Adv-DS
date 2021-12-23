#include<stdio.h>

int main()
{
    int n,i;
    int a[n];
    printf("Enter Array Size: ");
    scanf("%d",&n);
    
    printf("Enter Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nPrinting Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}