class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> Set;
       int st=0;
       int ed=0;
       int max=0;
       while(st<s.size())
       {
        auto it=Set.find(s[st]);
        if(it==Set.end())
        {  
            if(st-ed+1>max)
            {
                max=st-ed+1;
            }
            Set.insert(s[st]);
            st++;
        }
        else
        {
            Set.erase(s[ed]);
            ed++;

        }
       } 
       return max;
    }
};