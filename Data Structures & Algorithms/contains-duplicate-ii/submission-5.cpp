class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i;
        for(i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<=i+k && j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                return 1;
            }
        }
        return 0;

        
    }
};