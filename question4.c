#include <stdio.h>

// Function declaration 
void checkEvenOdd(int number);

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    //  Function call 
    checkEvenOdd(number);

    return 0;
}

// Function definition 
void checkEvenOdd(int number)
{
    if (number % 2 == 0)
    {
        printf("%d is an even number.\n", number);
    }
    else
    {
        printf("%d is an odd number.\n", number);
    }
}
