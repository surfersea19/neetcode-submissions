class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> a(nums.begin(), nums.end());

        int n = 1;

        while (a.find(n) != a.end()) {
            n++;
        }

        return n;
    }
};