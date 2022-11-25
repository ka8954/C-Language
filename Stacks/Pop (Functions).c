#include <stdio.h>
#include <stdio.h>
int Stack[100],n,i,data,top;

void pop()
{
     top=-1;
    printf("Number of Elements in a STACK : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the Data to Push : ");
        scanf("%d",&data);
        top++;
        Stack[top]=data;
    }
    top--;
}


void display()
{
    printf("\nSTACK: ");
    for(i=top;i>=0;i--)
    {
        printf("%d ",Stack[i]);
    }
}

int main()
{
pop();
display();
return 0;
}
