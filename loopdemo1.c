/*
through loop odd and even
**/
#include<stdio.h>
void main()
{
    int a;
    printf("odd Numbers:");
    for(a=1;a<=30;a=a+2)
    {
             printf("\n%d",a);
    }

    printf("\neven Numbers: ");
    for(a=1;a<=30;a++)
    {
        if( a%2 == 0 ) //0 != 0
        {
             printf("\n%d",a);
        } 
    }
}