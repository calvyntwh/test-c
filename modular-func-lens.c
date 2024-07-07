/******************************************************************************

    modular function get the length of arr and use with arrays and functions.

*******************************************************************************/
#include <stdio.h>

// Declare function prototypes
void promptArray(int array[], int len);
void printArray(int array[], int len);

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