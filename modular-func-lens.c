/******************************************************************************

    modular function get the length of arr and use with arrays and functions.

*******************************************************************************/
#include <stdio.h>

// Declare function prototypes
void promptArray(int array[], int len);
void printArray(int array[], int len);
int findSmallest(int array[], int len);
int findLargest(int array[], int len);
int printOddNumber(int array[], int len);

int main()
{
    // Declare & init working storage
    int array[10] = {0,0,0,0,0,0,0,0,0,0};
    int counter = 0; // generic loop counter
    int len = 0; //. holds the number of elements in array
    
    // compute the size of the array
    len = sizeof(array) / sizeof(int); // important

    promptArray(array, len);
    printArray(array, len);
    
    
    // Smallest of the array
    printf("\n\n\tSmallest of the array = %d", findSmallest(array, len));
    
    // Largest of the array
    printf("\n\n\tLargest of the array = %d", findLargest(array, len));
    
    printOddNumber(array, len);
    
    return 0;
}

void promptArray(int array[], int len)
    {
        int counter = 0;
        
        for(counter = 0;counter < len; counter++)
            {
                printf("\n\tPlease the #%d number : ", counter+1);
                scanf("%d", &array[counter]);
            }
    }

void printArray(int array[], int len)
    {
        int counter = 0;
        printf("\n\n\tArray contents\n\t======================");
        for(counter = 0;counter < len; counter++)
            {
                printf("\n\tarray[%d] = %d", counter+1, array[counter]);
            }
    }
    
int findSmallest(int array[], int len)
    {

        int counter = 0;
        int smallest = array[0];    // assume num1 is the smallest
        
        for(counter = 0; counter < len; counter++)
            {
                if (smallest > array[counter])
                    {
                        smallest = array[counter];
                    }
            }
            
    return smallest;
    
    }

int findLargest(int array[], int len)
    {
        int counter = 0;
        int largest = array[0];    // assume num1 is the smallest

        for(counter = 0; counter < len; counter++)
            {
                if (largest < array[counter])
                    {
                        largest = array[counter];
                    }
            }
            
    return largest;
    
    }
    

int printOddNumber(int array[], int len)
    {
        int counter = 0;
        printf("\n\n\tArray odd contents\n\t======================");
        for(counter = 0; counter < len; counter++)
            {
                if(array[counter] % 2 != 0)
                    {
                        printf("\n\tarray[%d] = %d", counter+1, array[counter]);
                    }
            }
    }
 