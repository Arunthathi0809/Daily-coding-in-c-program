#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void add();
void removeq();
void display();

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Add");
        printf("\n2.Remove");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                add();
                break;

            case 2:
                removeq();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}

void add()
{
    struct node *newnode;
    int value;

    newnode = (struct node*)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d",&value);

    newnode->data = value;
    newnode->next = NULL;

    if(front == NULL)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }

    printf("Element added\n");
}

void removeq()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue Underflow\n");
        return;
    }

    temp = front;

    printf("Removed element = %d\n",front->data);

    front = front->next;

    if(front == NULL)
        rear = NULL;

    free(temp);
}

void display()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    temp = front;

    printf("Queue elements (Top to Bottom):\n");

    while(temp != NULL)
    {
        printf("%d\n",temp->data);
        temp = temp->next;
    }
}