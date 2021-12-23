#include<stdio.h>
#include<stdlib.h>
int Arr[10];
int pos,i,size,item;
//int Max=6;
//int Max=(sizeof(Arr)/sizeof(Arr[0])) - 1;

int insertAtDesPos();

void main()
{
    int ch;
    printf("Enter number of elements in array: \n");
    scanf("%d",&size);

    printf("Enter %d elements are: : \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Choose your choices:\n 1 for Insert At Desired Position\n");
    scanf("%d",ch);
    do
    {
        switch(ch)
        {
            case 1: 
                insertAtDesPos();
            break;

            default:
                printf("Choice Invalid !!!");
            break;
        }
    } while(ch<2);
    

}

int insertAtDesPos()
{
    printf("Enter the position where you want to insert the element: ");
    scanf("%d",&pos);
    printf("Enter Item into that position: ");
    scanf("%d",&item);

    for(i=size-1;i>pos-1;i--)
    {
        Arr[i+1]=Arr[i];
    }
    Arr[pos-1]=item;

    printf("After Inserting the value - \n");
       for(i=0;i<size;i++)
    {
        printf("%d\n",Arr[i]);
    }
    return(0);
}