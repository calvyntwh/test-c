#include <stdio.h>

void promptArray(int array[], int len)
    {
        int counter = 0;
        
        for(counter = 0;counter < len; counter++)
            {
                printf("\n\tPlease the #%d number : ", counter+1);
                scanf("%d", &array[counter]);
            }
    }