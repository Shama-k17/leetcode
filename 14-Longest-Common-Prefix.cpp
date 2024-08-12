class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
      sort(arr.begin(),arr.end());
      int n=arr.size();
      string ans;
      for(int i=0;i<arr[0].length();i++)
      {
        bool match=true;
        char ch=arr[0][i];
        for(int j=1;j<n;j++)
        {  
            if(i>arr[j].length()||ch!=arr[j][i])
            {
                match=false;
                break;
            }
        }
        if(match==false)
        break;
        ans+=ch;
      }
      return ans;  
        
    }
};