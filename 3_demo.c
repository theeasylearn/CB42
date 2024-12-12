#include<stdio.h>
void main()
{
    float a,b,add,div;//declaration
    printf("Enter value of A: ");
    scanf("%f",&a);
    
    printf("Enter value of B: ");
    scanf("%f",&b);
    
    add=a+b;
    div=a/b;
    
    printf("\n%.2f and %.2f Addition is %.2f",a,b,add);
    printf("\ndivision is %.2f",div);
    
}
