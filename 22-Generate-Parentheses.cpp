class Solution {
public:
 vector<string> res;
 
void help(int open,int close,int n,int i,string temp)
{
    
    
   if(i==(2*n))
   {
    res.push_back(temp);
    return ;
   }
 
   if(open<n)
   {
    temp.push_back('(');
   help(open+1,close,n,i+1,temp);
   temp.pop_back();
   
   }
   if(open>close)
   {
     temp.push_back(')');
     help(open,close+1,n,i+1,temp);
     temp.pop_back();
   
   }
   
}
    vector<string> generateParenthesis(int n) {
       string temp;
        help(0,0,n,0,temp);
        return res;
    }
};