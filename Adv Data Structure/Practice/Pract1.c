#include<stdio.h>
#include<conio.h>

void main()
{

    int arr[4];
    int i,n=4;
    printf("Enter 4 Elemetns: \n");
    for (i = 0; i < n; i++)
    {
       scanf("%d",&arr[i]);
    }
    if(arr[0]==arr[1] || arr[2]==arr[3])
    {
        if(arr[0]==arr[1] && arr[2]==arr[3])
        {
            printf("Both, arr[0] And arr[2] adjacent number is Same");

        }
        else if(arr[0]==arr[1])
        { 
            printf("The adjacent number is Same: arr[0] = %d\t arr[1] = %d",arr[0],arr[1]);
        }
        else if (arr[2]==arr[3])
        {
            printf("The adjacent number is Same: arr[2] = %d\t arr[3] = %d",arr[2],arr[3]);
        }
    }    
    else
    {
        printf("The adjacent number is Not Same"); 
    }	
}