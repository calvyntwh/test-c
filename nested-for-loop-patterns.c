/******************************************************************************

    Nested loops and Pattern A/B/C

*******************************************************************************/
#include <stdio.h>

int main()
{
    // declare & init working storage
    int inner = 0;
    int outer = 0;
    
    // print pattern A
    printf("Pattern A\n==============================================\n");
    for(outer = 1; outer <= 10; outer++)
        {
            printf("Outer\tInner");
            printf("%2d\t",outer);
            for(inner = 1; inner <= 10; inner++)
                {
                    printf("%2d ",inner);
                }
            printf("\n");
        }
    // print pattern B
    printf("\nPattern B\n============================================\n");
    for(outer = 1; outer <= 10; outer++)
        {
            printf("%2d\t",outer);
            for(inner = outer; inner <= 10; inner++)
                {
                    printf("%2d ",inner);
                }
            printf("\n");
        }
    // print pattern C
    printf("\nPattern C\n============================================\n");
    for(outer = 1; outer <= 10; outer++)
        {
            printf("%2d\t",outer);
            for(inner = outer+1; inner <= 10; inner++)
                {
                    printf("%2d ",inner);
                }
            printf("\n");
        }
    
    return 0;
}
