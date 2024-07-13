int findProduct(int array[], int len)
    {
        int product = 1;
        int counter = 0;
        for(counter = 0; counter < len; counter++)
            {
                product = product * array[counter];
            }
        
        return product; 
    }