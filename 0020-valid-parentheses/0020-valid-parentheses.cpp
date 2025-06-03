class Solution {
public:
    bool isValid(string s) {

        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];

           
           if(ch=='('||ch=='{'||ch=='[')
           st.push(ch);
           else if(ch==')'||ch=='}'||ch==']')
           {
            if(ch==')')
            { 
                if(st.empty())
                return false;
                else if(st.top()=='(')
                st.pop();
                else
                return false;
                
            }
            else if(ch==']')
            {
                 if(st.empty())
                return false;
                else if(st.top()=='[')
                st.pop();
                else
                return false;
               
            } 
             else if(ch=='}')
            {
                if(st.empty())
                return false;
                else if(st.top()=='{')
                st.pop();
                else
                return false;
                
            } 

           }
        }
        
        if(st.empty())
        return true;
        else
        return false;
    }
};