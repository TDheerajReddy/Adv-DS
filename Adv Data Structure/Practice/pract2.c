// Add Node at spesific location

void insertAfter(struct node *prev_node, int new_data)
{
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)          //start == NULL
    {
        printf("the given previous/start node cannot be NULL");    
        return;
    }
         
    /* 2. allocate new node */
    struct node *new_node =(struct node*)malloc(sizeof(struct node));
 
    /* 3. put in the data */
    new_node->data = new_data;
 
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;           //new_node->next = start->next
 
    /* 5. move the next of prev_node as new_node */
    prev_node->next = new_node;                 //start->next = new_node
}



// Delete Node at spesific location
void deleteNode(struct node **head_ref, int position)
{
 
    // If linked list is empty
    if (*head_ref == NULL)
    {
        printf("List is Empty!!!");
        return;
    }

    // Store head node
    struct node *temp = *head_ref;
 
    // If head needs to be removed
    if (position == 0)
    {   
        *head_ref = temp->next;     // Change head
        free(temp);                // Free old head
        return;
    }
 //-----------------------------------------------------------------------------------------------------
    // Find previous node of the node to be deleted
    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;
 
    // If position is more than number of nodes
    if (temp == NULL || temp->next == NULL)
    {
        printf("Position is more than number of nodes!!!");
        return;
    }

    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    struct node *next = temp->next->next;

    free(temp->next); // Free memory

    temp->next = next;
}