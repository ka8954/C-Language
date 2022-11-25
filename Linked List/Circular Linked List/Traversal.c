#include <stdio.h>
#include <stdlib.h>
struct node
{
int data;
struct node *next;
}*head,*temp;

void traverse(struct node *ptr)
{
    temp = ptr;
    while(temp->next != head)
    {
       printf("%d ",temp->data);
       temp=temp->next;
    }
    if(temp->next==head)
    {
       printf("%d",temp->data);
    }
}

int main()
{
struct node *second;
struct node *third;
struct node *fourth;

head = (struct node*)malloc(sizeof(struct node));
second = (struct node*)malloc(sizeof(struct node));
third = (struct node*)malloc(sizeof(struct node));
fourth = (struct node*)malloc(sizeof(struct node));

head->data = 10;
head->next = second;

second->data = 20;
second->next = third;

third->data = 30;
third->next = fourth;

fourth->data = 40;
fourth->next = head;
traverse(head);

return 0;
}
