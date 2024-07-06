/******************************************************************************
    
    functions example

*******************************************************************************/
#include <stdio.h>

// declare functions
int addNum(int num1, int num2)
    {
        return num1 + num2;
    }

int prodNum(int first, int second)
    {
        return first*second;
    }

void printNum(int first, int second)
    {
        printf("\n\n\tnum1 = %d\tnum2 = %d",first,second);
    }

int main()
{
    // declare & init working storage
    int num1 = 9;
    int num2 = 6;
    int sum = 0;
    
    // call the fucntion to add 2 numbers
    sum = addNum(num1 , num2);
    
    
    //print the results
    printf("\n\n\t Sum of %d and %d is: %d", num1, num2, sum );
    printf("\n\n\t Product of %d and %d is: %d", num1, num2, prodNum(num1,num2));
    printNum(num1,num2);
    return 0;
}
