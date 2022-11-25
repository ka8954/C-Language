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
   
   while(temp->next!=head)
   {
     temp = temp->next;
   }
     temp->next = newnode;
}

void display(struct node *ptr)
{
  ptr = newnode;
   while(ptr->next!=newnode)
   { 
     printf("%d ",ptr->data);
     ptr=ptr->next;
   }
   
   if(ptr->next==newnode)
   {
     printf("%d",ptr->data);
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

insert(70);
display(head);

return 0;
}
