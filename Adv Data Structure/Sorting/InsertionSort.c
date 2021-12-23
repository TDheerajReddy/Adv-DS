#include<stdio.h>

void main()
{
    int arr[]={1,3,5,4,2};
    int i,j,temp,s;
    s=4-0+1;
    printf(" s = %d\n",s);
    printf("Sorting Started\n");
    for(i=0;i<s;i++)
    {
        temp=arr[i];
        j=i-1;

        while(temp<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=temp;
    }

    printf("Printing Sorted Array: \n");
    for(i=0;i<s;i++)
    {
        printf("%d\n",arr[i]);
    } 
}