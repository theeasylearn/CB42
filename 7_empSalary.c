#include<stdio.h>
void main()
{
    long int baseSalary,TA,DA,HRA,PF,tax,totsal,netsal;
    
    printf("Enter Base Salary: ");
    scanf("%ld",&baseSalary);

    // 10000  100%
    //     ?   2%
    TA=(baseSalary*2)/100;
    DA=(baseSalary*2)/100;
    HRA=(baseSalary*5)/100;
    PF=(baseSalary*3)/100;
    tax=(baseSalary*5)/100;

    totsal=baseSalary+TA+DA+HRA-PF;
    netsal=totsal-tax;
    
    printf("\nEmployee Salary :");
    printf("\nBase Salary : %ld",baseSalary);
    printf("\nTA : %ld",TA);
    printf("\nDA : %ld",DA);
    printf("\nHRA : %ld",HRA);
    printf("\nPF : %ld",PF);
    printf("\nTotal Salary : %ld",totsal);
    printf("\nTAX : %ld",tax);
    printf("\nNET Salary : %ld",netsal);

}