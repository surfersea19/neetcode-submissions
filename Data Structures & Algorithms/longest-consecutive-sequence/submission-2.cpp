class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> n;
        for(int i=0;i<nums.size();i++)
        {  
           n.insert(nums[i]);
        }
        int ans=0;
        for(int num:n)
        {
            if (!n.count(num-1))
           { int current=num;
            int count=1;
            while(n.count(current+1))
            {   current++;
                count++;
            }
            ans=max(ans,count);}

        }
        return ans;
        
        
    }
};
