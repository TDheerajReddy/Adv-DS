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

void insertAtBegning()		//insert at Begning
{
	struct node *temp;
	temp = createNode();
	printf("Enter a Number : ");
	scanf("%d",&temp->info);
	temp->next = start;
	start = temp;
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
	printf("Node Deleted");
    }
}

void deleteFromEnding() 		//Delete from End
{
	struct node *temp1, *temp2;
	if(start==NULL)
		printf("List is empty!!!\n");
	else if(start->next == NULL)
	{
		start = NULL;
		free(start);
		printf("Node Deleted");
	}
	else
	{
		temp1 = start;
		while(temp1->next != NULL)
		{       temp2 = temp1;
			temp1 = temp1->next;
		}
		temp2->next = NULL;
		free(temp1);
		printf("Node Deleted");
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
    printf("\n 2. Add Node to Begning");
    printf("\n 3. Delete Node from Begning");
    printf("\n 4. Delete Node from Ending");
    printf("\n 5. View List & Count Nodes");
    printf("\n 6. Exit");
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
		insertAtBegning();
		break;

	    case 3:
		deleteFromBegning();
		break;

	    case 4:
		deleteFromEnding();
		break;

	    case 5:
		viewListandCount();
		break;

	    case 6:
                exit(0);

            default:
		printf("Invalid Choice!!!\n");
	}
	getch();
    }
}