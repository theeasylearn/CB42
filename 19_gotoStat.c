#include<stdio.h>
void main()
{

    int a,b,add,re;
    up:
    printf("Enter Value of A: ");
    scanf("%d",&a);
    printf("Enter Value of B: ");
    scanf("%d",&b);

    add = a+b;

    printf("\nAddition is : %d",add);

    printf("\n\ndo you want to re-enter Values? (yes press 1): ");
    scanf("%d",&re);

    if(re==1)
    {
        goto up;
    }
}