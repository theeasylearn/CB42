//else if leader e.g.
#include<stdio.h>
void main()
{
    int per;
    
    printf("Enter Per: ");
    scanf("%d",&per);

    if(per>=90) 
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade Fail");
    }

} 