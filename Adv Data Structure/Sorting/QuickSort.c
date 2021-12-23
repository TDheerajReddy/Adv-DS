#include<stdio.h>

static void quickSort(int,int,int);
static int partition(int,int,int);
static void printArray(int,int);

void main()
{
    int arr[]={10,3,8,9,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf(" n = %d\n",n);

    quickSort(arr,0,n-1);
    printf("Sorted Array:\n");
    printArray(arr,n);
}

static void quickSort(int arr[],int low, int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}

static int partition(int arr[],int low,int high)
{
    int pivot=arr[high];                //Middle Most Point
    int i=(low-1);
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,high);
    return(i+1);
}

static void swap(int arr[],int i,int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

static void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n");
}