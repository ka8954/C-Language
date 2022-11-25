#include <stdio.h>
#include <stdlib.h>
int front=-1,rear=-1,data,Queue[100],n;
int main()
{   scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&data);
        rear++;
        Queue[rear]=data;
    }
    front++;
    printf("\nEn-Queue\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",Queue[i]);
    }
    printf("\nDe-Queue :\n");
    front++;
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",Queue[i]);
    }
    return 0;
}
