#include<stdio.h>
void main()
{
    int i,j,a=1;
    for(i=0;i<=3;i++) //4
    {
        for(j=3;j>=i;j--) //
        {
            printf("");
        }
        for(j=0;j<i;j++) //
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}