#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
}*top = NULL;
void push(int);
void pop();
void display();
int main()
{
int choice, value;
printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
while(1)
{
printf("\nEnter your choice : ");
scanf("%d",&choice);
switch(choice)
{case 1:
{
printf("\nEnter the value to insert: ");
scanf("%d", &value);
push(value);
break;
}
case 2:
{
pop();
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
void push(int value)
{
struct Node *t;
t = (struct Node*)malloc(sizeof(struct Node));
t->data = value;
if(top == NULL)
t->next = NULL;
else
t->next = top;
top = t;
}
void pop()

{
if(top == NULL)
printf("\nEMPTY STACK\n");
else{
struct Node *temp = top;
printf("\nPopped Element : %d", temp->data);
printf("\n");
top = temp->next;
free(temp);
}
}
void display()
{
if(top == NULL)
printf("\nEMPTY STACK\n");
else
{
printf("The stack is \n");
struct Node *temp = top;
while(temp->next != NULL){
printf("%d--->",temp->data);
temp = temp -> next;
}
printf("%d--->\n",temp->data);
}
}

/*
output:

1. Push
2. Pop
3. Display
4. Exit
Enter your choice : 1

Enter the value to insert: 1

Enter your choice : 2

Popped element : 1

Enter your choice : 3

EMPTY STACK

Enter your choice : 4
EXIT

*/



