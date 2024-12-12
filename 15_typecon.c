//char -> int -> float -> double
#include<stdio.h>
void main()
{
    char ch='A';
    int a=2,b=5;
    double c;

    // b=ch; //implecite type conversion
    // printf("CH : %d",ch);
    // printf("\nB : %lf",b);

    //explicite type conversion
    c=(float)b/(float)a;
    printf("\nC: %lf",c);

}