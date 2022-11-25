#include <stdio.h>
#include <string.h>
int size,num,count=0;
struct Student
{
    char Name[200];
    char Branch[1000];
    int Regn_no;
    float CGPA;
};


void Linear_Search(struct Student data[size],int size)
{
  printf("Enter Registration Number to Search: \n");
  scanf("%d",&num);
  for(int i=0;i<size;i++)
  {
     if(data[i].Regn_no==num)
     {
       printf("Result of Linear Search : \n");
        printf("Name : %s\n",data[i].Name);
        printf("Branch : %s\n",data[i].Branch);
        printf("Registration No : %d \n", data[i].Regn_no);
        printf("CGPA : %f\n", data[i].CGPA);
        printf("\n");
     }
     else
        count++;
  }
    if(count==size)
    printf("Invalid Data");
}

void display(struct Student data[size],int size)
{    printf("<--------------------------------------------------------------->\n");
    for(int i=0;i<size;i++)
    {   
        printf("<--------------------------------------------------------------->\n");
        printf("Name : %s\n",data[i].Name);
        printf("Branch : %s\n",data[i].Branch);
        printf("Registration No : %d \n", data[i].Regn_no);
        printf("CGPA : %f\n", data[i].CGPA);
        printf("\n");
        printf("<--------------------------------------------------------------->\n");
    }
}

void Sort_Bubble(struct Student data[size], int size)
{
    int i, j;
    struct Student temp;
    for(i=0; i<size - 1;i++)
    {
        for(j=0;j<(size - 1-i);j++)
        {
            if(data[j].Regn_no > data[j+1].Regn_no)
            {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            } 
        }
    }
    display(data,size);
}

void Binary_Search(struct Student data[size],int size)
{
Sort_Bubble(data,size);
printf("Enter Registration Number: ");
scanf("%d",&num);
int first = 0;
int last = size - 1;
int middle = (first+last)/2;
while (first <= last) 
{
    if (data[middle].Regn_no < num)
    first = middle + 1;    
    else if (data[middle].Regn_no == num) 
    {
        printf("Binary Search Result : \n\n");
        printf("Registration No : %d \n", data[middle].Regn_no);
        printf("Name : %s\n",data[middle].Name);
        printf("Branch : %s\n",data[middle].Branch);
        printf("CGPA : %.2f\n", data[middle].CGPA);
        break;
    }

    else
    last = middle - 1;
    middle = (first + last)/2;
}
if (first > last)
printf("Not found! %d is not present in the list.\n", num);
}

void Sort_Insertion(struct Student data[size], int size) 
{
  for (int i= 1; i<size; i++) 
  {
    float key = data[i].CGPA;
    int j = i-1;
    while(key > data[j].CGPA && j >= 0) 
    {
      data[j+1].CGPA = data[j].CGPA;
      --j;
    }
    data[j + 1].CGPA = key;
  }
  display(data,size);
}

int main()
{
    printf("Enter the Size of Structure Array: ");
    scanf("%d",&size);
    struct Student data[size];
    int i;
    for(i=0;i<size;i++)
    {
        printf("\nEnter Student Name :");
        scanf("%s",data[i].Name);
        
        printf("Enter Branch Name :");
        scanf("%s",data[i].Branch);
        
        printf("Enter the Registration No :");
        scanf("%d",&data[i].Regn_no);
        
        printf("Enter the CGPA :");
        scanf("%f",&data[i].CGPA);
        printf("\n");
        
    }
    Sort_Insertion(data,size);
return 0;
}
