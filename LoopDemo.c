/*
Topic : Looping Statement
1. while
2. do.. while..
3. for loop
**/
#include<stdio.h>
void main()
{
    int a=1;
    while(a<=5) // 1<=5 2<=5 3<=5 4<=5 5<=5 (6<=5 false)
    {
            printf("\n%d. Hello World",a);//1
            a++;//1+1=2 2+1=3 3+1=4 4+1=5 5+1=6
    }
    a=1;
    do
    {
        printf("\n%d. Hello World",a);//1
        a++;//1+1=2 2+1=3 3+1=4 4+1=5 5+1=6
    }while(a<=5);
    a=1;
    for(a=0;a<5;a++)
    {
        printf("\n%d. Hello World",a+1);//1
    }

}