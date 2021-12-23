struct node
{
    int data;
    struct node *prev;
    struct node *next;
}

struct node *start = NULL;

struct node* createNode()
{
    struct node *n;
    n=(struct node *)malloc(sizeof(struct node));
    return(n);
}

void insertAtBegning()
{
    struct node *temp;
    temp = createNode();
    printf("Enter a Number : ");
	scanf("%d",&temp->data);
	temp->next = start;
    temp->prev = NULL;
	start = temp;
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
            printf("%d ",t->data);
            count++;
            t = t->next;
        }
    }
    printf("\nNumber of Node : %d",count);
}

int menu()
{
    int ch;
    printf("\n 1. Add Node to Begning");
    printf("\n 2. View List & Count Nodes");
    printf("\n 3. Exit");
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
                insertAtBegning();
                break;

            case 2:
                viewListandCount();
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid Choice!!!");
        }
        getch();
    }
}