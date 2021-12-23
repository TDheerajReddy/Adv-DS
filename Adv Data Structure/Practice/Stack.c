#include<stdio.h>
#include <stdlib.h>
int top=-1, Stack[30];
void push(int [], int);
void pop(int []);
void display(int [], int);

void main()
{
    int max;
    int choice, size;
    printf("Enter Size of Array : ");
    scanf("%d",&size);
    max=sizeof(Stack[size]/Stack[0]);
    printf("Size of Array is %d : ",max);

    do
    {
        printf("\nEnter your Choice :-\n 1 Push\n 2 Pop\n 3 Display\n 4 Exit\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                push(Stack, max);
                break;
            
            case 2:
                pop(Stack);
                break;
 
            case 3:
                display(Stack, top);
                break;

            case 4:
                exit(0);
            default:
                printf("Invalid Choice!!!");
                exit(0);
        }

    }while (choice<5);
}

void push(int Stack[], int max)
{
    int num;
    if(top == max-1)
    {
        printf("OVERFLOW!!!");
    }
    else
    {
        printf("Enter Number : ");
        scanf("%d",&num);
        top=top+1;
        Stack[top]=num;
    }
}

void pop(int Stack[])
{
    int temp;
    if(top == -1)
    {
        printf("UNDERFLOW!!!");
    }
    temp=Stack[top];
    Stack[top]= -909;
    top=top-1;
}

void display(int Stack[], int top)
{
    int i=0;
    while(i<=top)
    {
        printf("%d ",Stack[i]);
        i++;
    }
}