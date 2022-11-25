#include <stdio.h>
#include <stdlib.h>

int Stack[100],n,top,i,data;

void push()
{
    top=0;
    printf("Number of Elements in a STACK : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Data to Push : ");
        scanf("%d",&data);
        Stack[top]=data;
        top++;
    }
}
void display()
{
    if(top>=0)
    {
        for(i=top-1;i>=0;i--)
        {
            printf("%d ",Stack[i]);
        }
    }
}

int main()
{
  push();
  printf("\n");
  printf("STACK : ");
  display();
  return 0;
}
