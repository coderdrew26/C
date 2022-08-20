#include <stdio.h>
#include <stdlib.h>

int main()
{

    char grade = 'A';

    switch (grade)
    {
    case /* constant-expression */ 'A':
        /* code */ printf("You did great!\n");
        break;
    case 'B':
        printf("You did good");
        break;
    case 'C':
        printf("You did poorly");
        break;
    case 'D':
        printf("You did bad");
        break;
    case 'F':
        printf("You failed");
        break;

    default:
        printf("Invalid grade");
        break;
    }

    return 0;
}