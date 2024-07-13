#include <stdio.h>

void printArray(int array[], int len)
    {
        int counter = 0;
        printf("\n\n\tArray contents\n\t======================");
        for(counter = 0;counter < len; counter++)
            {
                printf("\n\tarray[%d] = %d", counter+1, array[counter]);
            }
    }