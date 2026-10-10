#include<stdio.h>
#define MAX=5
int top=-1;
int a[top]=MAX;
void pop()
{
 int val;
 if(top==MAX-1)
{
 printf("stack overflowed\n");
}
else
{
 printf("enter the elements=");
 scanf("%d",&val);
 top++;
 a[top]=val;
 printf("%d pushed into stack.\n",val)
}
}
void push()
{
   if(top==-1)
   {
     printf("stack underflow\n");
   }
   else
   {
    printf("%d popped from stack",a[top]);
    top--;
   }
}
void display()
{
   int i;

    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack elements are:\n");

        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
}
void peek()
{
   
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Top element is: %d\n", stack[top]);
    }

}
int main()
{ 
     int choice;
     while(1)
     {
     printf("1.pop");
      printf("2.push");
       printf("3.display");
        printf("4.peek");
        printf("enter the choice=");
        scanf("%d",&choice);

     switch (choice)
     {
       case 1:
        pop();
        break;
    
       case 2:
       push();
       break;

       case 3:
       display();
       break;

       case 4:
       peek();
       break;

       case 5:
       return 0;
     
       default:
        printf("invalid choice");
     } 
   }
   return 0;
}
