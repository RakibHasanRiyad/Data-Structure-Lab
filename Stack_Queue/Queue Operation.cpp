#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node* next;
}node;

node*front=NULL;
node*rear=NULL;

node*create()
{
    return ((node*)malloc(sizeof(node)));
}

void EnQueue(int value)
{
    node *temp;
    temp=create();
    temp->data=value;
    temp->next=NULL;
    if (front == NULL && rear == NULL)
    {
       front= rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }
}


void DeQueue()
{
    node*temp=front;

    if(front==NULL || rear==NULL)
    {
        printf("Stack is empty !!!\n");
    }
    else
    {
        front=temp->next;
        free(temp);
    }
}


void display()
{
    node *temp=front;
    if(temp!=NULL)
    {
        printf("Elements are:  ");
        while(temp!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("NULL\n");
    }
    else
        printf("Queue is Empty!!!\n");
}

int main()
{
    int key;

    printf("1.EnQueue Data\n");
    printf("2.DeQueue Data\n");
    printf("3.Display Data of Queue\n");
    printf("4.Exit\n");

    while(1)
     {
         printf("Press Any Key : ");
         scanf("%d", &key);

         if(key==1)
         {
             int value;
             printf("Enter Data For Enqueue : ");
             scanf("%d",&value);
             EnQueue(value);
         }
         else if(key==2)
         {
            printf("Delete First Insert Data Successfully\n");
            DeQueue();

         }
         else if(key==3)
         {
             display();
         }
       else if(key==4)
         {
          exit(0);
         }
     }

}
