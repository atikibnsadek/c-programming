#include<stdio.h>

void main()
{
    int mark;
    printf("Enter your marks:");
    scanf("%d",&mark);
    if((mark>=97)&&(mark<=100))
        printf("\n\a Your grade is A+.");
    else if((mark>=90)&&(mark<97))
        printf("\n\a Your grade is A.");
    else if((mark>=87)&&(mark<90))
        printf("\n\a Your grade is A-.");
    else if((mark>=83)&&(mark<87))
        printf("\n\a Your grade is B+.");
    else if((mark>=80)&&(mark<83))
        printf("\n\a Your grade is B.");
    else if((mark>=77)&&(mark<80))
        printf("\n\a Your grade is B-.");
    else if((mark>=73)&&(mark<77))
        printf("\n\a Your grade is C+.");
    else if((mark>=70)&&(mark<73))
        printf("\n\a Your grade is C.");
    else if((mark>=67)&&(mark<70))
        printf("\n\a Your grade is C-.");
    else if((mark>=63)&&(mark<67))
        printf("\n\a Your grade is D+.");
    else if((mark>=60)&&(mark<63))
        printf("\n\a Your grade is D.");
    else
       printf("\n\a Your grade is F.");
}
