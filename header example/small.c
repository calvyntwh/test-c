int findSmallest(int num1, int num2, int num3)
    {
        int smallest = num1;    // assume num1 is the smallest
        
        if (smallest > num2)
            {
                smallest = num2;
            }
        if (smallest > num3)
            {
                smallest = num3;
            } 
            
    return smallest;
    
    }
