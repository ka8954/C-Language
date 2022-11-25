#include <stdio.h>
#include <stdlib.h>
int n;
struct node
{
    int data;
    struct node *next;
}*head,*temp,*ptr;

void push()
{
    int data,i;
    head= (struct node*)malloc(sizeof(struct node));
    printf("Enter data for Node 1 : ");
    scanf("%d",&data);
    head->data=data;
    head->next=NULL;
    temp=head;
  
    for(i=2;i<=n;i++)
    {
       ptr= (struct node*)malloc(sizeof(struct node));
       printf("Enter data for Node %d : ",i);
       scanf("%d",&data);
       ptr->data=data;
       ptr->next=NULL;
       temp->next=ptr;
       temp=temp->next;
    }
}

void pop()
{
  temp=head;
  while(temp->next!=NULL)
   {
     ptr=temp;
     temp=temp->next;
   }
    free(temp);
    ptr->next=NULL;
}

void displaynodes()
{
    printf("\nThe Elements are: ");
    temp=head;
    while(temp!=NULL)
    {
    printf("%d ",temp->data);
    temp=temp->next;
    }
}

int main()
{
    printf("Enter Number of Elements in Stack: ");
    scanf("%d",&n);
    push();
    displaynodes();
    pop();
    displaynodes();
    return 0;
}
