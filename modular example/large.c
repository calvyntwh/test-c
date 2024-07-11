int findLargest(int num1, int num2, int num3)
    {
        int largest = num1;    // assume num1 is the smallest
        
        if (largest < num2)
            {
                largest = num2;
            }
        if (largest < num3)
            {
                largest = num3;
            } 
            
    return largest;
    
    }
 