#include <stdio.h>

// Function declarations
float calculateTotal(float a, float b, float c);
float calculateAverage(float total);
char getGrade(float average);
void displayGrade(float average);
void displayStatus(float average);

int main(void)
{
    float cProg, maths, electronics;
    float total, average;

    printf("Enter C Programming score: ");
    scanf("%f", &cProg);

    printf("Enter Mathematics score: ");
    scanf("%f", &maths);

    printf("Enter Electronics score: ");
    scanf("%f", &electronics);

    // Function calls
    total = calculateTotal(cProg, maths, electronics);
    average = calculateAverage(total);

    printf("\n--------- STUDENT RESULT ---------\n");
    printf("C Programming: %.2f\n", cProg);
    printf("Mathematics: %.2f\n", maths);
    printf("Electronics: %.2f\n", electronics);
    printf("Total Score: %.2f\n", total);
    printf("Average Score: %.2f\n", average);
    printf("Grade: ");
    displayGrade(average);
    printf("Status: ");
    displayStatus(average);

    return 0;
}

// Calculates the total of three scores
float calculateTotal(float a, float b, float c)
{
    return a + b + c;
}

// Calculates the average from a total of three scores
float calculateAverage(float total)
{
    return total / 3.0f;
}

//  Returns the letter grade for a given average
char getGrade(float average)
{
    if (average >= 80)
    {
        return 'A';
    }
    else if (average >= 70)
    {
        return 'B';
    }
    else if (average >= 60)
    {
        return 'C';
    }
    else if (average >= 50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}

// Displays the letter grade for a given average
void displayGrade(float average)
{
    printf("%c\n", getGrade(average));
}

// Displays pass/fail status based on the average
void displayStatus(float average)
{
    if (average >= 50)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }
}