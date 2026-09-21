class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> n(nums.begin(),nums.end());
        int a=1;
        while(n.count(a))
        {
            a++;

        }
        return a;
    }
};