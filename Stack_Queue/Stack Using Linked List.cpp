#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} node;

node*create()
{
    return ((node*)malloc(sizeof(node)));
}

node*top=NULL;

void push(int data)
{
    node*temp=create();
    temp->data=data;

    if(top==NULL)
    {
        temp->next=NULL;
    }
    else
        temp->next=top;

    top=temp;

}

void pop(node*temp)
{
    if(top==NULL)
    {
        printf("Stack is empty !!!\n");
    }
    else
    {
        node*temp=top;
        top=temp->next;
        free(temp);
    }
}

void print()
{
    node*temp=top;
    if(temp!=NULL)
    {
        printf("MY Stack is : ");
        while(temp!=NULL)
        {
            printf("%d-> ", temp->data);
            temp=temp->next;
        }
        printf("NULL\n\n");
    }
    else
    {
        printf("Stack is empty!!!\n");
    }

}

int main (void)
{
    int key;

    printf("Press 1 for Push\n");
    printf("Press 2 for Pop\n");
    printf("Press 3 for Display\n");
    printf("Press 4 for exit\n");

    while(1)
    {
        printf("Press Any Key : ");
        scanf("%d", &key);

        if(key==1)
        {
            int data;
            printf("Enter Data For Push : ");
            scanf("%d",&data);
            push(data);
        }
        else if(key==2)
        {
            printf("Delete Last Insert Data Successfully\n\n");
            pop(top);

        }
        else if(key==3)
        {
            print();
        }
        else if(key==4)
        {
            exit(0);
        }
    }

}
