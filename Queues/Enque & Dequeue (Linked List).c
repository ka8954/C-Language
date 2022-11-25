#include<stdio.h>   
#include<stdlib.h>  
struct node   
{  
    int data;   
    struct node *next;  
};  
struct node *front;  
struct node *rear;   
void Enqueue();
void Dequeue();
void display();  

void main ()  
{  
    int n;   
    printf("Number of Nodes : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        Enqueue();
    }
    display();
    Dequeue();
    display();
}  

void Enqueue()  
{  
    struct node *ptr;  
    int data;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("Enter value :");  
        scanf("%d",&data);  
        ptr -> data = data;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}     

void Dequeue()
{
    struct node *temp=front;
    front = front->next;
    free(temp);
}

void display()  
{  
    struct node *ptr;  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {   printf("\nLinked List : ");  
        while(ptr != NULL)   
        {  
            printf("%d ",ptr -> data);  
            ptr = ptr -> next;  
        }  
