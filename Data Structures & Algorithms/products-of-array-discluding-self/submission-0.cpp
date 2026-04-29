class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> n(nums.size());
        for(int i=0;i<nums.size();i++)
        {   int k=1;
            for(int j=0;j<nums.size();j++)
            {
               if(j!=i) 
               {
                k=k*nums[j];
               }
            }
            n[i]=k;
        }
        return n;
    }
};
