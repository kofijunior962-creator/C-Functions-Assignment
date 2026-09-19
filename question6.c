#include <stdio.h>

// Function declaration
void displayGrade(float score);

int main(void)
{
    float score;

    printf("80-100 = A\n");
    printf("70-79 = B\n");
    printf("60-69 = C\n");
    printf("50-59 = D\n");
    printf("Below 50 = F\n\n"); 

    printf("Enter your score: ");
    scanf("%f", &score);
 
    // Function call
    displayGrade(score);

    return 0;
}

// Function definition
void displayGrade(float score)
{
    if (score < 0 || score > 100)
    {
        printf("Invalid score entered.\n");
    }
    else if (score >= 80)
    {
        printf("Grade = A\n");
    }
    else if (score >= 70)
    {
        printf("Grade = B\n");
    }
    else if (score >= 60)
    {
        printf("Grade = C\n");
    }
    else if (score >= 50)
    {
        printf("Grade = D\n");
    }
    else
    {
        printf("Grade = F\n");
    }
}