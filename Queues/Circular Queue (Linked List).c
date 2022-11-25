#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}*front,*rear,*newnode,*temp;

void insert()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    int data;
    scanf("%d",&data);
    newnode->data=data;
    if(front==NULL)
    {
        front=newnode;
        rear=newnode;
        rear->next=front;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
        rear->next=front;
    }
}

void display()
{
    temp=front;
    while(temp->next!=front)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        insert();
    }
    display();
    return 0;
}

    }  
}  
