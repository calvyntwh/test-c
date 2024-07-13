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