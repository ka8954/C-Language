#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void insert (struct node *Head,int data)
{
    struct node *newnode,*temp;
    temp = Head;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void printList (struct node *head)
{
   struct node *tmp = head;

    while(tmp != NULL){
        if(tmp->next == NULL){
            printf("%d", tmp->data);
        }
        else{
            printf("%d, ", tmp->data);
        }
        tmp = tmp->next;
    }
}

int main()
{
    struct node *Head;
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

    insert(Head,80);
    printList(Head);
    return 0;
}
