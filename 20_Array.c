/*Array :
index value start with 0
**/
#include<stdio.h>
void main()
{
    int rollno[5],i;

    for(i=0;i<5;i++)
    {
        printf("Enter Rollno of stdent %d : ",i+1); //i++ --> i=i+1
        scanf("%d",&rollno[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("\nStudent %d rollno is : %d",i+1,rollno[i]);
    }
}