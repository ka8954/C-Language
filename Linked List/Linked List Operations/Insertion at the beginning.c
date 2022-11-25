#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} *Head;

void insert (int data)
{
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=Head;
    Head = ptr;
    
    while(ptr !=NULL)
    {
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
}
int main()
{
    struct node *Second;
    struct node *Third;
    struct node *Fourth;
    struct node *Five;
    
    Head = (struct node*) malloc(sizeof(struct node));
    Second = (struct node*) malloc(sizeof(struct node));
    Third = (struct node*) malloc(sizeof(struct node));
    Fourth = (struct node*) malloc(sizeof(struct node));
    Five = (struct node*) malloc(sizeof(struct node));
    
    Head->data = 10;
    Head->next = Second;
    
    Second->data = 20;
    Second->next = Third;
    
    Third->data = 30;
    Third->next = Fourth;
    
    Fourth->data = 40;
    Fourth->next = Five;
    
    Five->data = 50;
    Five->next = NULL;

    insert(60);
    return 0;
}
