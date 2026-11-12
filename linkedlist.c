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

void display(NODE head)
{
NODE cur;

 if(head==NULL)

 {
    printf("list is empty\n");
    return;
 }

printf("LIST=");

for( cur = head; cur != NULL; cur=cur->next)
{
    printf("%d",cur->data);
}
}

int main(void)
{
    int item,n,i;
    NODE temp,head=NULL,tail=NULL;
    printf("enter the number of elements=\n");
    scanf("%d",&n);

    printf("enter %d integers\n",n);

    for(i=0;i<n;i++)
    {
    
        printf("enter an item=\n");
        scanf("%d",&item);

        temp = getnode(item);

        if(head == NULL)
        {
         head = temp;
        }
        else
        {
         tail->next = temp;
         
        }
         tail = temp;
    }
    display(head);
    return 0;

}
