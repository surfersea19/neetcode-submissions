class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0;
        int l=0;
        int r=people.size()-1;
        while(l<=r)
        {
            if(people[l]+people[r]<=limit)
            {
                i++;
                l++;
                r--;
            }
            else if(people[l]+people[r]>limit)
            {
                i++;
                r--;
            }
        }
        return i;
        
    }
};