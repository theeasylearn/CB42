/* control statment / Decision making Statment
1. if 
2. if else
3. nested if
4. if... else if... else /else if leader
5. switch
**/
/*
operators of conditional statment /contitional operators
< , > ,<= , >=, == , !=
**/
// 1. if 
//2. if else
//3. nested if == contition inside condition
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter Age of A: ");
    scanf("%d",&a);//30
    
    printf("Enter Age of B: ");
    scanf("%d",&b);//200

    printf("Enter Age of C: ");
    scanf("%d",&c);//100

    if(a>b)// 30>200
    {
        if(a>c) // 30>100
        {
                printf("A is Greater");
        }
        else
        {
                printf("C is Greater");
        }
        
    }
    else
    {
        if(b>c)
        {
                printf("B is Greater");
        }
        else
        {
                printf("C is Greater");
        }        
    }

}