class Solution {
public:
    string convert(string s, int numRows) {
       vector<string>ans(numRows);
        if(numRows==1)
        return s;
        int i=0;
        bool flag=false;
        for(auto ch:s)
        {
             ans[i]+=ch;
             if(i==0||i==numRows-1)
             flag=!flag;
             if(flag==true)
             i++;
             if(flag==false)
             i--;

        }

         string zigzag="";
         for(auto ch:ans)
         {
            zigzag+=ch;
         }
return zigzag;
    }
};