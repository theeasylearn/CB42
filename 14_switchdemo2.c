//vowels : a, e, i, o, u
#include<stdio.h>
void main()
{
    char ch;
    printf("Enter Any Charater : ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("It is a Vowel");
            break;
        
        default: 
            printf("It is a Constants");
        
    }
}