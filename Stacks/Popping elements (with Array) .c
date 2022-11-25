#include <stdio.h>
#include <stdlib.h>
int Stack[100],top,data,i,n,pos;

int main()
{
   top=-1;
   printf("Number of Elements to be moved into a Stack : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     if(top>=n-1)
     {
       printf("\nOVERFLOW\n");
     }
     else
     {
         printf("Enter the Value to Push : ");
         scanf("%d",&data);
         top++;
         Stack[top]=data;
     }
   }
printf("\n");
display();
Pop();
printf("\n");
display();

return 0;
}

void Pop()
{
  if(top<=-1)
  {
    printf("Stack Underflow");
  }

  else
  {
    top--;
  }
}
   

void display()
{
 if(top>=0)
   {
     for(i=top;i>=0;i--)
     {
     printf("%d ",Stack[i]);
     }
   }
  else
     printf("Stack is EMPTY");
}
