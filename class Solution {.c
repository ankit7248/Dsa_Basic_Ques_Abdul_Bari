class Solution {
public:
    
      int* twoSum(int*nums, int target)
      {
        static int res[2];
        int size= *(&nums + 1) - nums;
          for(int i=0;i<size-1;i++)
          {
              for(int j=i;j<size-1;j++)
              {
                  if(nums[i]+nums[j] == target)
                  {res[0]=nums[i];res[1]=nums[j];break;}
                    else
                    {
                        continue;
                    }
              }
              }
          return res;
      }
};