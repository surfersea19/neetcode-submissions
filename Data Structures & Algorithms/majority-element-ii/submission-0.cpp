class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> s;
        for(int n:nums)
        {
            s[n]++;
        }
        int count=nums.size()/3;
        vector<int> ans;
        for(auto x:s )
        {
            if(x.second>count)
            {
                ans.push_back(x.first);
            }
        }
        return ans;

    }
};