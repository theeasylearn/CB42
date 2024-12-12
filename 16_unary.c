/* Unary operators :
1. Unary minus ( – )
2. Increment ( ++ )
3. Decrement ( — )
4. NOT ( ! )
5. Addressof operator ( & )
6. sizeof()
**/
#include<stdio.h>
void main()
{
    // int a=50,b=20;
    // b = -a;
    //b = ++a;
    //b = --a;
    // printf("Unary Decrement of B is : %d",b);
    // if(a != 50) // 
    // {
    //     printf("True");
    // }
    // else
    // {
    //     printf("False");
    // }

    int a;
    float b;
    char c;
    long int d;
    double e;

    printf("Interger Size is : %d",sizeof(a));
    printf("\nFloat Size is : %d",sizeof(b));
    printf("\nchar Size is : %d",sizeof(c));
    printf("\nLong Interger Size is : %d",sizeof(d));
    printf("\ndouble Size is : %d",sizeof(e));
        
    
}