/******************************************************************************

    Using the nested while loop print 12 x 12 times table

*******************************************************************************/
#include <stdio.h>

int main()
{
    // Declare & init working storage
    int inner = 1; // inner counter
    int outer = 2; // outer counter
    
    // display 
    while(outer <= 12)
        {
            printf("\n\n\tThe %d times table\n\t=================", outer);
            while(inner <= 12)
                {
                    printf("\n\t%2d x %2d = %3d", inner, outer, inner*outer);
                    inner++;
                }
            inner = 1; // reset inner to 1
            outer++;
        }
    
    return 0;
}
