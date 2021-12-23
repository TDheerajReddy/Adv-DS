#include<stdio.h>

int MaxStk=30;
int Top_A=0;
int Top_B=0;
int Stack[30];
int Item;
int push_A(int*,int,int,int,int);
/* int push_B(int*,int,int,int,int);
int pop_A(int*,int,int);
int pop_B(int*,int,int);
*/
int displayStack(int[]);


void main()
{
    int choice;
    do
    {
        printf("Enter Your Choice :\n");
        printf("\t1 - Push for Stack 'A'\n");
        printf("\t2 - Pop for Stack 'A'\n");
        printf("\t3 - Push for Stack 'B'\n");
        printf("\t4 - Pop for Stack 'B'\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
                push_A(Stack, Top_A, Top_B, Item, MaxStk);
                break;
            
            case 2:
                displayStack(Stack);
                break;
         /*   case 2:
                pop_A(Stack, Top_A, Item);
                break;

            case 3:
                push_B(Stack, Top_A, Top_B, Item, MaxStk);
                break;

            case 4:
                pop_B(Stack, Top_B, Item);
                break;
                */



            default: printf("Choice Invalid!");
                break;
        }
    } while (choice<=2 && choice>0);   
}

int push_A(int *Stack, int Top_A, int Top_B, int Item, int MaxStk)
{
    if(Top_A==MaxStk || Top_B==1 || Top_B==Top_A+1)
    {
        printf("Overflow Stack 'A'!");
    }
    printf("Enter Item :- ");
    scanf("%d",&Item);
    Top_A=Top_A+1;
    Stack[Top_A]=Item;
    return(0);
}

int displayStack(int Stack[])
{
    int i;
    for(i=1;i<=Top_A;i++)
    {
        printf("%d",Stack[i]);
    }
}