#include <stdio.h>

int main()
{
    // Declare & init working storage
    float expression_without_parenthesis = 0.0;
    float expression_with_parenthesis = 0.0;

    //Expression 1
    expression_without_parenthesis = 1 + 3 / 2.0;
    expression_with_parenthesis    = (1 + (3 / 2.0));
    
    printf("Expression 1 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);

    //Expression 2
    expression_without_parenthesis = 2 - 3 * 4;
    expression_with_parenthesis    = (2 - (3 * 4));
    
    printf("Expression 2 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 3
    expression_without_parenthesis = 2 / 3.0 * 4;
    expression_with_parenthesis    = ((2 / 3.0) * 4);
    
    printf("Expression 3 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 4
    expression_without_parenthesis = 2 * 3 / 4.0;
    expression_with_parenthesis    = ((2 * 3) / 4.0);
    
    printf("Expression 4 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 5
    expression_without_parenthesis = 2.0 / 3.0 / 4.0;
    expression_with_parenthesis    = ((2.0 / 3.0) / 4.0);
    
    printf("Expression 5 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 6
    expression_without_parenthesis = 4.0 / 3.0 * 2.0 / 5.0;
    expression_with_parenthesis    = (((4.0 / 3.0) * 2.0) / 5.0);
    
    printf("Expression 6 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 7
    expression_without_parenthesis = 6.0 * 3.0 / 4.0 * 5.0;
    expression_with_parenthesis    = (((6.0 * 3.0) / 4.0) * 5.0);
    
    printf("Expression 7 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 8
    expression_without_parenthesis = 4 * 3 * 3;
    expression_with_parenthesis    = ((4 * 3) * 3);
    
    printf("Expression 8 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 9
    expression_without_parenthesis = 2 - 2 * 2 * 2 * 2;
    expression_with_parenthesis    = (2 - (((2 * 2) * 2) * 2));
    
    printf("Expression 9 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 10
    expression_without_parenthesis = 2.0 / 3.0 * 4 * 4;
    expression_with_parenthesis    = (((2.0 / 3.0) * 4) * 4);
    
    printf("Expression 10 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 11
    expression_without_parenthesis = 1 + 2.0 / 3.0 * 4 + 5;
    expression_with_parenthesis    = (1 + ((2.0 / 3.0) * 4) + 5);
    
    printf("Expression 11 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    //Expression 12
    expression_without_parenthesis = 5 / 2.0 * 2 + 4 % 3 + 9 - 3;
    expression_with_parenthesis    = ((((5 / 2.0) * 2) + (4 % 3) + 9) - 3);
    
    printf("Expression 12 - without parenthesis: %f, with parenthesis: %f\n",
        expression_without_parenthesis, expression_with_parenthesis);
    
    return 0;
}
