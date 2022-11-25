#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void Traversal (struct node *ptr)
{
    while(ptr !=NULL)
    {
    printf("%d ",ptr->data);
    ptr=ptr->next;
    }
}
int main()
{
    struct node *Head;
    struct node *Second;
    struct node *Third;
    struct node *Fourth;
    struct node *Tail;
    
    Head = (struct node*) malloc(sizeof(struct node));
    Second = (struct node*) malloc(sizeof(struct node));
    Third = (struct node*) malloc(sizeof(struct node));
    Fourth = (struct node*) malloc(sizeof(struct node));
    Tail = (struct node*) malloc(sizeof(struct node));
    
    Head->data = 10;
    Head->next = Second;
    
    Second->data = 20;
    Second->next = Third;
    
    Third->data = 30;
    Third->next = Fourth;
    
    Fourth->data = 40;
    Fourth->next = Tail;
    
    Tail->data = 50;
    Tail->next = NULL;
    
    Traversal(Head);
    return 0;
}
