/* ===================================================================================
    prompt the user to enter 3 numbers
    pass the 3 numbers to a function: int findSmallest(int num1, int num2, int num3)
    print the smallest number in the main()
=================================================================================== */
#include <stdio.h>
#include "routine.h"

int main()
{
    // declare and initialise working storage
    int num1 = 0;   // holds the user input
    int num2 = 0;
    int num3 = 0;
    int smallest = 0;   // holds the smallest of the 3 numbers
    int largest = 0;
    
    // prompt user to enter 3 numbers
    printf("\n\tPlease enter the first number : ");
    scanf("%d", &num1);
    printf("\n\tPlease enter the second number : ");
    scanf("%d", &num2);    
    printf("\n\tPlease enter the third number : ");
    scanf("%d", &num3);    

    // pass to function to find smallest
    smallest = findSmallest(num1, num2, num3);
    largest = findLargest(num1, num2, num3); 
    
    // print the result
    printf("\n\tThe smallest of %d, %d and %d is %d", num1, num2, num3, smallest);
    printf("\n\tThe largest of %d, %d and %d is %d", num1, num2, num3, largest);    
    printNum(num1, num2, num3);
    
    return 0;
}


