int findSum(int array[], int len)
    {
        int sum = 0;
        int counter = 0;
        for(counter = 0; counter < len; counter++)
            {
                sum = sum + array[counter];
            }
        
        return sum; 
    }