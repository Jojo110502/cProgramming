#include <stdio.h>

int main()
{
    printf("Hello World!/n");
    int input;
    printf("Enter number between 1 to 7 to get a random Name: /n");
    scanf("%d", &input);
    switch (input)
    {
    case 1:
        printf("Jin");
        break;

    case 2:
        printf("Jimin");
        break;

    case 3:
        printf("Jungkook");
        break;

    case 4:
        printf("RM");
        break;

    case 5:
        printf("Suga");
        break;

    case 6:
        printf("JHope");
        break;

    case 7:
        printf("V");
        break;

    default:
        printf("Entered number is wrong.");
        break;
    }
    return 0;
}