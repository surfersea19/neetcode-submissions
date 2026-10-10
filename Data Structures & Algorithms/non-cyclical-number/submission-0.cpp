class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> a;
        while(n!=1)
        {   int k=n;
            int s=0;
        while(k>0)
        {
            s+=(k%10)*(k%10);
            k=k/10;
        }
        n=s;
        if(a.count(s)==0)
        {
            a.insert(s);
        }
        else{return 0;}
        }
        return 1;

        
    }
};
