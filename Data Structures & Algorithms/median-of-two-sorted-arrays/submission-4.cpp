class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int nums: nums2)
        {
            int l=0;
            int r=nums1.size()-1;
            while(l<=r)
            {
                int mid=l+(r-l)/2;
                if(nums1[mid]<nums)
                {
                l=mid+1;
                }
                else
                {
                r=mid-1;
                }
            }
        nums1.insert(nums1.begin()+l,nums);

        }
        if(nums1.size()%2==0)
        {
            return (nums1[(nums1.size()/2)-1]+nums1[nums1.size()/2])/2.0;
        }
        else 
            return nums1[nums1.size()/2];
        
    }
};
