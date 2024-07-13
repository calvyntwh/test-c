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