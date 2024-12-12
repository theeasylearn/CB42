#include<stdio.h>
#include<string.h>
/*
1. gets()---> scanf();
2. puts()---> printf();
*/
void main()
{
    char ch[]="vora",name[50];
    //1+1=2 "1"+"1"=11
    printf("Enter Name: ");
    // scanf("%s",&name); 
    gets(name);
    // printf("\n%s",name);
    puts(name);
}