#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter value of A: ");
    scanf("%d",&a);//10
    
    printf("Enter value of B: ");
    scanf("%d",&b);//20

    temp = a;
    a = b;
    b = temp;
     
    printf("\nSwap Values: ");
    printf("\nA : %d",a);
    printf("\nB : %d",b);

}