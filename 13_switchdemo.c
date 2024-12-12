#include<stdio.h>
void main()
{

    char option;
    int a,b;
    printf("Enter value of A : ");
    scanf("%d",&a);
     
    printf("Enter value of B : ");
    scanf("%d",&b);
    
    printf("Options:\na. Addition\nb. Subtraction\nc. Division\nd. Multiplication");
    printf("\nSelect Any One Option from above : ");
    scanf("%s",&option);
    switch(option)
    {
        case 'a':
        case 'A':
            printf("\nAddition is : %d",a+b);
            break;
        case 'b' :
        case 'B':
            printf("\nSubtraction is : %d",a-b);
            break;
        case 'c':
        case 'C':
            printf("\nDivision is : %d",a/b);
            break;
        case 'd':
        case 'D':
            printf("\nMultiplication is : %d",a*b);
            break;
        default:
            printf("Please Select proper option..!!");
    }
}