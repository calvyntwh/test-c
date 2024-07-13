float findAverageOddNumber(int array[], int len)
    {
        int counter = 0;
        int oddCount = 0;
        int sum = 0;
        float average = 0;
        
        for(counter = 0; counter < len; counter++)
            {
                if(array[counter] % 2 != 0)
                    {
                        sum = sum + array[counter];
                        oddCount++;
                    }
            }
        average = (float) sum / oddCount; 
        
        return average;
    }