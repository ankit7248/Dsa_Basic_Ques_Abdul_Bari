    //     int j = 0;
    //     int div ;
    //     int data = 0;
    //     int max = *max_element(nums.begin(),nums.end());
    //     vector<int> store;

    //     for(int i = 1 ; i < max; i++)
    //     { 
    //         int sum = 0;
    //         for(int  j = 0; j < nums.size(); j++)
    //         {
    //             div = nums[j] / i;
    //             int x = div;
    //             double temp = div - x;
    //             if(temp > 0)
    //             {
    //                (int)div; 
    //                div++;
    //                cout << div << " ";
    //                store.emplace_back(div);                    
    //             } 
    //             else
    //             {
    //                cout << div << " ";
    //                store.emplace_back(div); 
    //             }
    //         }
    //         cout << "  ";
    //     sum = accumulate(store.begin(), store.end(), sum);
    //     // cout << sum << " ";
    //     if(sum <= threshold)
    //     {
    //          data  = sum; 
    //     }
    //     else
    //     {
    //         store.clear();
    //     }
    // }
    //     return data;