/******************************************************************************

    Write a C program that does the following:
    
    1.  display the following menu

        Menu
        =====
        1.  Prompt user to enter 10 numbers
        2.  Find the sum
        3.  Find the product
        4.  Find the smallest
        5.  Find the largest
        6.  Find average of ODD numbers only
        7.  Display array content
        9.  Quit
        
        please select your options :

*******************************************************************************/

#include <stdio.h>

// Declare function prototypes
void promptArray(int array[], int len);
int findSum(int array[], int len);
int findProduct(int array[], int len);
int findLargest(int array[], int len);
int findSmallest(int array[], int len);
void printArray(int array[],int len);
void printMenu();
void printAverageOddNumber(int array[], int len);

int main()
{
    // Declare and init working storage
    int array[10] = {0};
    int len = 0;
    int menu = 0;
    int sum = 0;
    int product = 0;
    int largest = 0;
    int smallest = 0;
    int count = 0;
    
    
    len = sizeof(array) / sizeof(int); // important
    
    // Create menu loop
    do
        {
            printMenu();
            scanf("%d", &menu);
            switch (menu)
                {
                    case 1:
                        promptArray(array, len);
                        break;
                    case 2:
                        sum = findSum(array, len);
                        printf("\n\n\tThe sum of the array is : %d", sum);
                        break;
                    case 3:
                        product = findProduct(array, len);
                        printf("\n\n\tThe product of the array is : %d", product);
                        break;
                    case 4:
                        largest = findSmallest(array, len);
                        printf("\n\n\tThe smallest number in the array is : %d", smallest);
                        break;
                    case 5:
                        smallest = findLargest(array, len);
                        printf("\n\n\tThe largest number in the array is : %d", largest);
                        break;
                    case 6:
                        printAverageOddNumber(array, len);
                        break;
                    case 7:
                        printArray(array, len);
                        break;
                    case 9:
                        break;
                    default:
                        printf("\n\n\tInvalid Entry");
                        break;
                }
        }
    while(menu != 9);

    return 0;
}

void printMenu()
    {
        printf("\n\n\tMenu\n\t=====");
        printf("\n\t1.\tPrompt user to enter 10 numbers");
        printf("\n\t2.\tFind the sum");
        printf("\n\t3.\tFind the product");
        printf("\n\t4.\tFind the smallest");
        printf("\n\t5.\tFind the largest");
        printf("\n\t6.\tFind average of odd number only");
        printf("\n\t7.\tDisplay array content");
        printf("\n\t9.\tQuit");
        printf("\n\n\tPlease select your options : ");
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

void promptArray(int array[], int len)
    {
        int counter = 0;
        
        for(counter = 0;counter < len; counter++)
            {
                printf("\n\tPlease the #%d number : ", counter+1);
                scanf("%d", &array[counter]);
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
    
void printAverageOddNumber(int array[], int len)
    {
        int counter = 0;
        int oddCount = 0;
        int sum = 0;
        float average = 0;
        printf("\n\n\tArray odd contents\n\t======================");
        for(counter = 0; counter < len; counter++)
            {
                if(array[counter] % 2 != 0)
                    {
                        printf("\n\tarray[%d] = %d", counter+1, array[counter]);
                        sum = sum + array[counter];
                        oddCount++;
                    }
            }
        average = (float) sum / oddCount; 
        printf("\n\n\t%f", average);
    }

int findSum(int array[], int len)
    {
        int sum = 0;
        int counter = 0;
        for(counter = 0; counter < len; counter++)
            {
                sum = sum + array[counter];
                printf("\ncount %d\tcurrent sum: %d", counter, sum);
            }
        
        return sum; 
    }
    

int findProduct(int array[], int len)
    {
        int product = 0;
        int counter = 0;
        for(counter = 0; counter < len; counter++)
            {
                product = product * array[counter];
            }
        
        return product; 
    }