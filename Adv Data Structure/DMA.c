#include<stdio.h>
void main()
{
    short int x=110;
	short int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
	int n = sizeof(arr) / sizeof(arr[0]);

    printf("sizeof(x) = %d\n",sizeof(x));
    printf("sizeof(arr) = %d\n",sizeof(arr));
    printf("sizeof(arr[0]) = %d\n",sizeof(arr[0]));
    printf("n = %d\n",n);
}