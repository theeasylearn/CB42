#include<stdio.h>
void main()
{
    int option,a,b,i;
    char ch;
    do
    {
        printf("Enter value of A : ");
        scanf("%d",&a);
        
        printf("Enter value of B : ");
        scanf("%d",&b);
        
        printf("Options:\n1. Addition\n2. Subtraction\n3. Division\n4. Multiplication");
        printf("\nSelect Any One Option from above : ");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
                printf("\nAddition is : %d",a+b);
                break;
            case 2 :
                printf("\nSubtraction is : %d",a-b);
                break;
            case 3:
                printf("\nDivision is : %d",a/b);
                break;
            case 4:
                printf("\nMultiplication is : %d",a*b);
                break;
            default:
                printf("Please Select proper option..!!");
        } 
        
        printf("\n\nDo you want to Continue (y/n) ? :  ");
        scanf("%s",&ch);

    }while(ch=='y'||ch=='Y');

}