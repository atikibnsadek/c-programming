#include<stdio.h>

void main()
{
    int mark;
    printf("\n\aEnter your mark:");
    scanf("%d",&mark);

    switch(mark/10)
    {
        case 10:
        case 9:
            printf("\n\a Your Grade is A");
            break;
        case 8:
            printf("\n\a Your Grade is B");
            break;
        case 7:
            printf("\n\a Your Grade is C");
            break;
        case 6:
            printf("\n\a Your Grade is D");
            break;
        default:
            printf("\n\a Your Grade is F");
            break;
    }
}
