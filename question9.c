#include <stdio.h>

// Function declaration
int findLargest(int a, int b, int c);

int main(void)
{
    int a, b, c, largest;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    // Function call
    largest = findLargest(a, b, c);

    printf("Largest Number = %d\n", largest);

    return 0;
}

// Function definition 
int findLargest(int a, int b, int c)
{
    int largest = a;

    if (b > largest)
    {
        largest = b;
    }
    if (c > largest)
    {
        largest = c;
    }

    return largest;
}

