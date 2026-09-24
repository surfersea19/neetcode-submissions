class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int res;
        while(l<=r)
        {   
            int k=0;
            int mid=l+(r-l)/2;
            for(int nums:piles)
            {
                if(nums%mid==0)
                {k+=nums/mid;}
                else
                {
                    k+=((nums/mid)+1);
                }
            }
            if(k<=h)
            {
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }


        }
        return res;

        
    }
};
