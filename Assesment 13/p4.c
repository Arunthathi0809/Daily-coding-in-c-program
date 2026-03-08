#include <stdio.h>
#include <stdlib.h>

struct node
{
    int id;
    int maths;
    int science;
    struct node *prev;
    struct node *next;
};

struct node* createSample();
void insertEntry(struct node **head);
void deleteEntry(struct node **head);
void display(struct node *head);

int main()
{
    struct node *head;
    int choice;

    head = createSample();

    while(1)
    {
        printf("\n1.Insert Entry");
        printf("\n2.Delete Entry");
        printf("\n3.Display List");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insertEntry(&head);
                break;

            case 2:
                deleteEntry(&head);
                break;

            case 3:
                display(head);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}

struct node* createSample()
{
    struct node *head=NULL,*temp=NULL,*newnode;
    int i;

    int ids[5]={101,102,103,104,105};
    int maths[5]={80,75,90,85,70};
    int science[5]={78,82,88,80,76};

    for(i=0;i<5;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));

        newnode->id=ids[i];
        newnode->maths=maths[i];
        newnode->science=science[i];

        newnode->prev=NULL;
        newnode->next=NULL;

        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }

    return head;
}

void insertEntry(struct node **head)
{
    struct node *newnode,*temp;
    int id,pos;

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter new ID: ");
    scanf("%d",&newnode->id);

    printf("Enter Maths mark: ");
    scanf("%d",&newnode->maths);

    printf("Enter Science mark: ");
    scanf("%d",&newnode->science);

    printf("Enter ID near which to insert: ");
    scanf("%d",&id);

    printf("1.Insert Before\n2.Insert After\nEnter choice: ");
    scanf("%d",&pos);

    temp=*head;

    while(temp!=NULL && temp->id!=id)
        temp=temp->next;

    if(temp==NULL)
    {
        printf("ID not found\n");
        free(newnode);
        return;
    }

    if(pos==1)
    {
        newnode->prev=temp->prev;
        newnode->next=temp;

        if(temp->prev!=NULL)
            temp->prev->next=newnode;
        else
            *head=newnode;

        temp->prev=newnode;
    }
    else
    {
        newnode->next=temp->next;
        newnode->prev=temp;

        if(temp->next!=NULL)
            temp->next->prev=newnode;

        temp->next=newnode;
    }
}

void deleteEntry(struct node **head)
{
    struct node *temp=*head;
    int id;

    printf("Enter ID to delete: ");
    scanf("%d",&id);

    while(temp!=NULL && temp->id!=id)
        temp=temp->next;

    if(temp==NULL)
    {
        printf("ID not found\n");
        return;
    }

    if(temp->prev!=NULL)
        temp->prev->next=temp->next;
    else
        *head=temp->next;

    if(temp->next!=NULL)
        temp->next->prev=temp->prev;

    free(temp);

    printf("Entry deleted\n");
}

void display(struct node *head)
{
    struct node *temp=head;

    printf("\nID\tMaths\tScience\n");

    while(temp!=NULL)
    {
        printf("%d\t%d\t%d\n",temp->id,temp->maths,temp->science);
        temp=temp->next;
    }
}