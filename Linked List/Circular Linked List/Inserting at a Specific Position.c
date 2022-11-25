#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
}*head,*temp,*newnode;
void insert(int data)
{
   newnode = (struct node*)malloc(sizeof(struct node));
   newnode->data = data;
   newnode->next = head;
   temp = head;
   
   int pos;
   scanf("%d",&pos);
   
   for(int i=1;i< pos - 1;i++)
   {
     temp = temp->next;
   }
   temp->next = newnode;
   newnode->next = temp->next->next;
}

void display(struct node *ptr)
{
    struct node *ptr1;
    int count=0;
    ptr=ptr1=head;
    while(ptr->next!=head)
    {
        ptr=ptr->next;
        count++;
    }
    if(ptr->next==head)
    {
        count++;
    }
 for(int i=1;i<=count;i++)
 {
     printf("%d ",ptr1->data);
     ptr1=ptr1->next;
 }
}

int main()
{
head = (struct node*)malloc(sizeof(struct node));
struct node *second = (struct node*)malloc(sizeof(struct node));
struct node *third = (struct node*)malloc(sizeof(struct node));
struct node *fourth = (struct node*)malloc(sizeof(struct node));

head->data = 10;
head->next = second;

second->data = 20;
second->next = third;

third->data = 30;
third->next = fourth;

fourth->data = 40;
fourth->next = head;

insert(50);
display(head);

return 0;
}
