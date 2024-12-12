//else if leader
// and = &&  ,, or = ||
#include<stdio.h>
void main()
{
    int a,b,c;
    
    printf("Enter Age of A: ");
    scanf("%d",&a);//200
    
    printf("Enter Age of B: ");
    scanf("%d",&b);//10

    printf("Enter Age of C: ");
    scanf("%d",&c);//50

    if(a>b && a>c) // 200>10 and 200>50
    {
        printf("A is Greater");
    }
    else if(b>c) //100>50
    {
        printf("B is Greater");    
    }
    else
    {
        printf("C is Greater");       
    }
 
} 