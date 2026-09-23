class Solution {
public:
    int mySqrt(int x) {
        int i=1;
        while(1LL*i*i<=x)
        {i++;}
        return i-1;
        
    }
};