//datatype:
//1. numbers == integer eg 1,2,3,-1,-2,0  == %d
//2. float == point values eg 11.2 14.23 , ==%f
//3. long int eg 500000 //%ld
//4. double  10000.2345 %lf
//5. char == charaterists eg ,b,casd ==  %c %s 
//keywords == 32
//Arithmatic operators = +, -, *, /, %

#include<stdio.h>
void main()
{
    int a,b,add,sub,mul,div,devi; //declaration
    printf("Enter value of A: ");
    scanf("%d",&a);
    
    printf("Enter value of B: ");
    scanf("%d",&b);
    
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    devi=a%b;

    //10 and 5 addition is 15

    printf("\n%d and %d Addition is %d",a,b,add);
    printf("\nSubtraction is %d",sub);
    printf("\nmultiplication is %d",mul);
    printf("\ndivision is %d",div);
    printf("\ndivisible ans : %d",devi);
}

