/* =========================================================== 
    prompt the user to enter 4 numbers
    calculate the total;
    calculate the product;
    calculate the average
    display the result
    average should use float
=========================================================== */
#include <stdio.h>

int main()
{
    // declare and initialise working storage
    int num1 = 0;       // holds the user input
    int num2 = 0;
    int num3 = 0;       // holds the user input
    int num4 = 0;
    int sum = 0;
    int product = 0;
    float avg = 0.0;        // holds he sum of the numbers

    // prompt the user to enter 4 numbers
    printf("\nPlease enter the first number : ");
    scanf("%d", &num1);    
    printf("\nPlease enter the second number : ");
    scanf("%d", &num2);
    printf("\nPlease enter the third number : ");
    scanf("%d", &num3);
    printf("\nPlease enter the fourth number : ");
    scanf("%d", &num4);

    // compute the product of all 4 numbers and display 
    sum = num1 + num2 + num3 + num4;
    printf("\n\tThe sum of %d + %d + %d + %d = %d", num1, num2, num3, num4, sum);
    product = num1 * num2 * num3 * num4;
    printf("\n\tThe product of %d * %d * %d * %d = %d", num1, num2, num3, num4, sum);
    avg = (float) sum / 4;
    printf("\n\tThe average of %d + %d + %d + %d = %.2f", num1, num2, num3, num4, avg);
    
    return 0;
}