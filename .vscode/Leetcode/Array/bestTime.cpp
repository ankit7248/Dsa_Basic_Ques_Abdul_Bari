        vector<int> value;
        vector<int> store;
        
        copy(prices.begin(), prices.end(), store.begin());

        int min = prices[0];
        int max = prices[0];
        int minIndex = 0;
        
        
        for(int i = 0 ; i < prices.size() ; i++)
        {
            if(min > prices[i])
            {
                min = prices[i];
            }
            
        }

        for(int j = 0; j < store.size() ; j++)
        {
            if(store[j] == min)
            {
                minIndex = j;
                return minIndex;
            }
        }

        for(minIndex; minIndex < prices.size() ; minIndex++)
       
        {
            if(max < prices[minIndex])
            {
                max = prices[minIndex];
            }
       }

       int profit = max - min;
       if(profit == 0 || profit == 1)
       {
            return 0;
       }
       else 
       {
             value.push_back(profit);      
       } 
      return value;