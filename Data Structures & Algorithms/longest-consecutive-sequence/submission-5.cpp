class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n(nums.begin(),nums.end());
        int ans=0;
        for(int nums:n)
        {
            if(!n.count(nums-1))
            {
                int cur=nums;
                int count=1;
                while(n.count(cur+1))
                {
                    cur++;
                    count++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
        
    }
};
