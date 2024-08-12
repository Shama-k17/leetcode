class Solution {
public:
vector<string> result;
     void help(int i,string temp,string digits,unordered_map<char,string> m)
      {
          if(i==digits.length())
          {
            result.push_back(temp);
            return ;
          }
          
          string s=m[digits[i]];
          for(int j=0;j<s.length();j++)
          {
            temp.push_back(s[j]);
            help(i+1,temp,digits,m);
            temp.pop_back();
          }

      }

    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> m;
        if(digits.length()==0)
        {
            return {};
        }
       

        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
         
        string temp;
        
        help(0,temp,digits,m);
        return result;
        
    }
};
