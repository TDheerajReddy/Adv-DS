#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *start = NULL;

struct node* createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}

void insertAtEnding()       //insert at End
{
    struct node *temp, *t;
    temp = createNode();
    printf("Enter a Number : ");
    scanf("%d",&temp->info);
    temp->next = NULL;

    if(start==NULL)
        start = temp;
    else
    {
        t = start;
        while(t->next != NULL)
        {
	    t = t->next;
	}
	t->next = temp;
    }
}

void deleteFromBegning()       //delete from Begning
{
    struct node *r;
    if(start==NULL)
        printf("List is empty!!!\n");
    else
    {
        r=start;
        start = start->next;
        free(r);
    }
}

void viewListandCount()
{
    struct node *t;
    int count=0;
    t = start;
    if(t==NULL)
        printf("List is empty!!!\n");
    else
    {
        while(t!=NULL)
        {
	    printf("%d ",t->info);
	    count++;
            t = t->next;
        }
    }
    printf("\nNumber of Node : %d",count);
}

int menu()
{
    int ch;
    printf("\n 1. Add Node from End");
    printf("\n 2. Delete Node from Begning");
    printf("\n 3. View List & Count Nodes");
    printf("\n 4. Exit");
    printf("\n Enter Your Choice : ");
    scanf("%d",&ch);
    return(ch);
}

void main()
{
    while(1)
    {
	    clrscr();
        switch(menu())
        {
            case 1:
                insertAtEnding();
                break;
                
            case 2:
                deleteFromBegning();
                break;
            
            case 3:
            	viewListandCount();
                break;

            case 4:
                exit(0);

            default:
		printf("Invalid Choice!!!\n");
	}
	getch();
    }
}