#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};

typedef struct node *NODE;

NODE getnode(int item)
{
    NODE temp=(NODE)malloc(sizeof(struct node));

    if(temp==NULL)
    {
        printf("memory allocation failed\n");
        exit(1);
    }

    temp->data = item;
    temp->next = NULL;
    return temp;
}
NODE insert(NODE first,int item)
{
    NODE temp=getnode(item);
    temp->next=first;
    return temp;

}
NODE delete(NODE first)
{
    NODE temp;

    if(first==NULL)
    {
        printf("list is empty\n");
        return NULL;
    }
    temp=first;
    first->next=first;
    printf("deleted element=%d\n",temp->data);
    free(temp);
}
void display(NODE first)
{
    if(first==NULL)
    {
        printf("list is empty\n");
    }
    return;
printf("list=\n");
for( ; first!=NULL; first=first->next)
{
    printf("%d",first->data);
}
printf("NULL\n");
}
int  main(void)
{
    NODE first=NULL;
    int choice,item;
    for(;;)
    {
        printf("\n---LINKED LIST DEMO---\n");
        printf("\nINSERT AT FRONT\n");
    }
    printf("1.insert\n2.delete\n3.display\n4.exit");
    printf("enter the choice=");
    scanf("%d",&choice);
    do
    {
     switch (choice)
     {
       case 1:
        insert();
       break;

       case 2:
        delete();
       break;

       case 3:
       display();
       break;

       case 4:
       printf("exit\n");
       break;

       default:
        break;
     }   
    }while(choice!=4);
    return 0;
}
