class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0,j=heights.size()-1;
        int area,maxi=0;
        for(i=0;i<heights.size();i++)
        {
        for(j=i+1;j<heights.size();j++)
        {
            area=min(heights[i],heights[j])*(j-i);
            maxi=max(maxi,area);
    
        }
        }

        return maxi;
    }
};
