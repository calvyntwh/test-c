/******************************************************************************

1. prompt the user to enter number between 1-7
2. print the day of the week for that number

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1 = 0;
    
    printf("\n\tEnter a number between 1 and 7:");
    scanf("%d", &num1); //dont add anything else here.
    
    if ((num1 < 1) || (num1 > 7))
        {
            printf("Error, the number you entered is out of range");
            printf("\nNumber is :\t%d",num1);
        }
    else
        {
            if (num1 == 1)
                {
                    printf("\n\n\tThe number you entered is %d, the` day of the week is Monday", num1);
                }
            if (num1 == 2)
                {
                    printf("\n\n\tThe number you entered is %d, the day of the week is Tuesday", num1);
                }
            if (num1 == 3)
                {
                    printf("\n\n\tThe number you entered is %d, the day of the week is Wednesday", num1);
                }
            if (num1 == 4)
                {
                    printf("\n\n\tThe number you entered is %d, the day of the week is Thursday", num1);
                }
            if (num1 == 5)
                {
                    printf("\n\n\tThe number you entered is %d, the day of the week is Friday", num1);
                }
            if (num1 == 6)
                {
                    printf("\n\n\tThe number you entered is %d, the day of the week is Saturday", num1);
                }
            if (num1 == 7)
                {
                    printf("\n\n\tThe number you entered is %d, the day of the week is Sunday", num1);
                }
        }    
       
    return 0;
}
