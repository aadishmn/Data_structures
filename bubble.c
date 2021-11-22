#include<stdio.h>    
 void print(int a[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
    }  
 void bubble(int a[], int n) // function to implement bubble sort  
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 }  
void main ()    
{    
    int i, j,temp;     
    int a[10];   
    printf("Enter elemnts:");
    for(i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    int n = sizeof(a)/sizeof(a[0]);   
    printf("Before sorting array elements are - \n");  
    print(a, n);  
    bubble(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    print(a, n);  
} 
/*
output:21
4
30 
87
91
6
2
76
54
5
Before sorting array elements are -
21 4 30 87 91 6 2 76 54 5 
After sorting array elements are -
2 4 5 6 21 30 54 76 87 91
*/
