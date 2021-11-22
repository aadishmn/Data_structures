#include <stdio.h>
#include<string.h>

int main()
{
    char string[20];
    printf("enter the string:");
    scanf("%s",string);
    char stack[10];
    int top =-1;
    int len=strlen(string);
    for(int i=0;i<len;i++)
        {
            top++;
            stack[top]=string[i];
        }
    for(int i=0;i<len;i++)
        {
        
            string[i]=stack[top];
            printf("%c",string[i]);
            top--;
        }

}

/* 
output:
enter the string: aadi
idaa
*/




