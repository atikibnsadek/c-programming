#include<stdio.h>

void main()
{
    char ch;
    printf("Enter a character:");
    ch=getchar();
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("\n\n\n\aThe character is vowel.");
    default:
        printf("\n\n\n\aThe character is not vowel.");
    }
}
