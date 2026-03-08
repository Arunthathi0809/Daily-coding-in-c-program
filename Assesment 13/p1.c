#include <stdio.h>
#include <stdlib.h>

struct node
{
    int id;
    int maths;
    int science;
    struct node *next;
};

void getdata(struct node **head);
void display(struct node *head);

int main()
{
    struct node *head = NULL;

    getdata(&head);
    display(head);

    return 0;
}

void getdata(struct node **head)
{
    struct node *newnode, *temp;
    int id;

    while (1)
    {
        printf("Enter ID (-1 to stop): ");
        scanf("%d", &id);

        if (id == -1)
            break;

        newnode = (struct node*)malloc(sizeof(struct node));

        newnode->id = id;

        printf("Enter Maths mark: ");
        scanf("%d", &newnode->maths);

        printf("Enter Science mark: ");
        scanf("%d", &newnode->science);

        newnode->next = NULL;

        if (*head == NULL)
        {
            *head = newnode;
        }
        else
        {
            temp = *head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->next = newnode;
        }
    }
}

void display(struct node *head)
{
    struct node *temp = head;

    printf("\nStudent Records\n");

    while (temp != NULL)
    {
        printf("ID: %d  Maths: %d  Science: %d\n",
               temp->id, temp->maths, temp->science);

        temp = temp->next;
    }
}