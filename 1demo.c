  //datatype  int, float, double, long int, char
     // int a; //%d 
     // float b=20.20; //%f
     // long int a1=100000; //%ld
     // double b1=1000.1000; //%lf
     // char name='A';//%c ,%s

#include<stdio.h>
void main()
{
   
     int a,b,add,sub,mul,div,divisible;

     printf("Enter value of A : ");
     scanf("%d",&a);
     
     printf("Enter value of B : ");
     scanf("%d",&b);
     
     add=a+b;
     sub=a-b;
     mul=a*b;
     div=b/a;
     divisible=b%a;
     
     printf("%d and %d Add is : %d\n",a,b,add);

     printf("%d and %d sub is : %d\n",a,b,sub);

     printf("%d and %d mul is : %d\n",a,b,mul);

     printf("%d and %d division is : %d\n",a,b,div);

     printf("%d and %d divisible is : %d",a,b,divisible);
    }