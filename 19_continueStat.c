#include<stdio.h>
void main()
{

    int i;

    for(i=1;i<=30;i++)
    {
        if(i%5 == 0)
        {
            continue;
        }
        printf("\n%d",i);
    }
}