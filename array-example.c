/******************************************************************************

    demo of array
        topic 8: declare dynamic array
        
    Write a c program that does the following:
    
    1. prompt the user to enter 10 nuimbers into an interger array
    2. find the sum of the array
    3. find the average of the array
    4. find the smallest
    5. find the largest
    6. print only the ODD number

*******************************************************************************/
#include <stdio.h>

// Declare function prototypes
int findSmallest(int array[10]);
int findLargest(int array[10]);

int main()
{
    // Declare & init working storage
    int array[10] = {0,0,0,0,0,0,0,0,0,0};
    int counter = 0; // generic loop counter
    int sum = 0;
    float average = 0.0;
    
    // prompt user to enter 10 numbers
    for (counter = 0; counter < 10; counter++)
        {
            printf("\n\tPlease enter the #%d number : ", counter+1);
            scanf("%d",&array[counter]);
        }
    
    // print the array contents
    printf("\n\n\tArray contents\n\t======================");
    for (counter = 0; counter < 10; counter++)
        {
            printf("\n\tarray[%d] = %d", counter+1, array[counter]);
        }
    
    // sum the array
    for (counter = 0; counter < 10; counter++)
        {
            sum = sum + array[counter];
        }
        
    printf("\n\n\tcounter = %d", counter);
    
    // Sum of the array
    printf("\n\n\tSum of the array = %d", sum);
    
    // average of the array
    average = (float) sum / counter;
    printf("\n\n\tAverage of the array = %.2f", average);
    
    // Smallest of the array
    printf("\n\n\tSmallest of the array = %d", findSmallest(array));
    
    // Largest of the array
    printf("\n\n\tLargest of the array = %d", findLargest(array));
    
    return 0;
}

int printOddNumber(int array[10]) // TODO: need to fix
    {
        int counter = 0;
        printf("\n\n\tArray contents\n\t======================");
        for(counter = 0; counter < 10; counter++)
            {
                printf("%d",counter);
            }
    }

int findSmallest(int array[10])
    {

        int counter = 0;
        int smallest = array[0];    // assume num1 is the smallest
        
        for(counter = 0; counter <10; counter++)
            {
                if (smallest > array[counter])
                    {
                        smallest = array[counter];
                    }
            }
            
    return smallest;
    
    }

int findLargest(int array[10])
    {
        int counter = 0;
        int largest = array[0];    // assume num1 is the smallest

        for(counter = 0; counter <10; counter++)
            {
                if (largest < array[counter])
                    {
                        largest = array[counter];
                    }
            }
            
    return largest;
    
    }
 