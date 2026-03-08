#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL;

void push();
void pop();
void display();

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Push");
        printf("\n2.Pop");
        printf("\n3.Display");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
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

void push()
{
    struct node *newnode;
    int value;

    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Enter value: ");
    scanf("%d",&value);

    newnode->data=value;
    newnode->next=top;

    top=newnode;

    printf("Element pushed\n");
}

void pop()
{
    struct node *temp;

    if(top==NULL)
    {
        printf("Stack Underflow\n");
        return;
    }

    temp=top;

    printf("Popped element = %d\n",top->data);

    top=top->next;

    free(temp);
}

void display()
{
    struct node *temp;

    if(top==NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp=top;

    printf("Stack elements (Top to Bottom):\n");

    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}