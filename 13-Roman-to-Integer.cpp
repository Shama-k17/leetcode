class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> ma;
        ma['M']=1000;
        ma['D']=500;
        ma['C']=100;
        ma['L']=50;
        ma['X']=10;
        ma['V']=5;
        ma['I']=1;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(i+1<s.length()&&ma[s[i]]<ma[s[i+1]])
            ans-=ma[s[i]];
            else if(ma[s[i]]>=ma[s[i+1]])
            ans+=ma[s[i]];
        }
        return ans;
    }
};