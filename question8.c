#include <stdio.h>

// Function declaration 
void multiplicationTable(int number);

int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Function call
    multiplicationTable(number);

    return 0;
}

// Function definition
void multiplicationTable(int number)
{
    int i;

    for (i = 1; i <= 12; i++)
    {
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
