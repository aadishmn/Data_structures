#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*temp,*head,*t;
void ins_beg();
void ins_end();
void ins_mid();
void del_beg();
void del_mid1();
void del_end();
void print();
void main()
{
    int value,n=1;
    head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    do{
        printf("\nEntere  the choice");
        printf("\n0.END");
        printf("\n1.Insert at begin");
        printf("\n2.Insert at end");
        printf("\n3.Insert at middle");
        printf("\n4.Delete at begin");
        printf("\n5.Delete at middle");
        printf("\n6.Delete at end");
        printf("\nChoice:");
        scanf("%d",&value);
        switch(value)
        {
            case 0:n=0;
                    break;
            case 1:ins_beg();print();
                   break;
            case 2:ins_end();print();
                   break;
            case 3:ins_mid();print();
                   break;
            case 4:del_beg();print();
                    break;
            case 5:del_mid1();print();
                    break;           
            case 6:del_end();print();
                    break;

            default:printf("\nInvalid !");
                    break;
        }

    }while(n==1);
}
void ins_beg()
{
    
    int i,n,x;
    
    temp=(struct node*)malloc(sizeof(struct node));
     printf("\nEnter value= ");
     scanf("%d",&x);
     temp->data=x;
     
     if(head==NULL)
     {
         head=temp;
     }
     else
     {
        temp->next=head;
        head=temp;
     }
}

void print()
{
        if(head==NULL)
    printf("\nList is empty!");
    else
    {   
    temp=head;
printf("\nList = ");
        while(temp!=NULL)
        {
          printf("%d->",temp->data);
          temp=temp->next;
        }
    }
    
}
void ins_end()
{
    int i,n,x;
    if(head==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->next=NULL;
        printf("\nEnter the value= ");
        scanf("%d",&temp->data);
        head=temp;
    }
    else
    {
     temp=(struct node*)malloc(sizeof(struct node));
     temp->next=NULL;
     printf("\nEnter the value:");
     scanf("%d",&x);
     temp->data=x;
     t=head;
     while(t->next!=NULL)
     {
        t=t->next; 
     }
     t->next=temp;
    }
    
}
void ins_mid()
{
    
    int n,x,i=1; 
    if(head==NULL)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        temp->next=NULL;
        printf("\nEnter the value= ");
        scanf("%d",&temp->data);
        head=temp;
    }
    else
    {
      temp=(struct node*)malloc(sizeof(struct node));
      temp->next=NULL;
      printf("\nEnter the position= ");
      scanf("%d",&n);
      if(n==1){
          ins_beg();
      }
      else{
          t=head;
          while(i<n-1)
          {
             t=t->next;
             i++;
          }
          printf("\nEnter the number:");
          scanf("%d",&temp->data);
          temp->next=t->next;
          t->next=temp;
        }
    }
}
void del_beg(){
    if(head==NULL){
        printf("\nList is empty");
    }
    
    else{
        temp=head;
        head=temp->next;
        free(temp);
        temp=NULL;
    }
}

void del_mid1(){
    int d;
    t-(struct node*)malloc(sizeof(struct node));
    
    if(head==NULL){
        printf("\nList is empty");
    }
    else{
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value= ");
        scanf("%d",&d);
        t=head;
        temp=head;
        
        if(head==d)
        {
         printf("enter different value");
         
         

        }else{
        while(temp->data!=d)
        {
            t=temp;
            temp=temp->next;
        }
        t->next=temp->next;

        free(temp);
        temp=NULL;
    }
    }
}

void del_end(){
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    if(head==NULL)
    {
        printf("\nList is empty");
    }
    else
    {
        temp=head;
    while(temp->next!=NULL)
    {
        t=temp;
        temp=temp->next;
    }
    t->next=NULL;
    free(temp);
    temp=NULL;
    }
}


/* 
output:

Enter the choiice 
0.END
1.Insert at begin
2.Insert at middle
3.Insert at end
4.Delete at begin
5.Delete at middle
6.Delete at end
choice:3

Enter the value= 12
list =12->

Enter the choiice 
0.END
1.Insert at begin
2.Insert at middle
3.Insert at end
4.Delete at begin
5.Delete at middle
6.Delete at end
choice:1

Enter the value= 1
list =1->12->

Enter the choiice 
0.END
1.Insert at begin
2.Insert at middle
3.Insert at end
4.Delete at begin
5.Delete at middle
6.Delete at end
choice:6

list =1->

Enter the choiice 
0.END
1.Insert at begin
2.Insert at middle
3.Insert at end
4.Delete at begin
5.Delete at middle
6.Delete at end
choice:0


*/






