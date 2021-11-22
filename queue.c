#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*t;
struct node*front=NULL,*rear=NULL;
void enqueue(int);
void dequeue();
void display();
int main()
{
int choice, value;
printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
while(1)
{
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{case 1:
{
printf("\nEnter the value to insert: ");
scanf("%d", &value);
enqueue(value);
break;
}
case 2:
{
dequeue();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("EXIT\n");
exit(0);
break;
}
default: printf("\nInvalid Choice\n");
}
}
return 0;
}
void enqueue(int value)
{
    struct node*t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=value;
    t->next=NULL;
    if(front==NULL)
    front=rear=t;
    else
    {
    rear->next=t;
    rear=t;
    }
}

void dequeue()
{
    if(front==NULL)
    {
        printf("QUEUE IS EMPTY");
    }
    else
    {
    struct node*t=front;
    front=front->next;
    printf("\nDeleted Element : %d", t->data);
    free(t);
}
}
void display()
{
    if(front==NULL)
    {
        printf("QUEUE IS EMPTY");
    }
    else
    {
    t=front;
    while(t->next!=NULL)
    {
    printf("%d--->",t->data);
    t=t->next;
    }
    printf("%d--->\n",t->data);
}
}
/*
output:
1. Enqueue
2. Dequeue
3. Display
4. Exit

Enter your choice : 1

Enter the value to insert: 12

Enter your choice : 29

Deleted element : 12
Enter your choice : 3
QUEUE IS EMPTY
Enter your choice : 4
EXIT
*/





