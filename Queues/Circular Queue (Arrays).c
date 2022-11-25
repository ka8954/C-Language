#include <stdio.h>
#include <stdlib.h>
int Queue[100],i,n,data;
int front=-1,rear=-1;
void Enqueue()
{
   printf("Enter the Data : ");
   scanf("%d",&data);
   
   if(front==-1 && rear==-1)
   {
       front=0;
   }
   rear = (rear+1)%n;
   Queue[rear]=data;
   if(rear==n-1)
   rear=0;
}

void Dequeue()
{
    front=front+1;
}

void display()
{
    for(i=front;i<n;i++)
    {
        printf("%d ",Queue[i]);
    }
}

int main()
{
    printf("Number of Elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        Enqueue();
    }
    printf("\nEnqueue : \n");
    display();
    Dequeue();
    printf("\nDequeue : \n");
    display();
    return 0;
}
