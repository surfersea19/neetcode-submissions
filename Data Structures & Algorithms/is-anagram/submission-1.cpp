class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
        return false;
        unordered_map<char,int> ss;
        unordered_map<char,int> st;
        for(int i=0;i<s.length();i++)
        {
            ss[s[i]]++;
            st[t[i]]++;
        }
        return ss==st;


        
    }
};
