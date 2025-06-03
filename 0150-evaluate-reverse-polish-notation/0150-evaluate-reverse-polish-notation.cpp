class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
     stack<int> st;
     int op1,op2;

     for(int i=0;i<tokens.size();i++)
     {
        string temp;
        temp=tokens[i];
               
        if(temp=="+"||temp=="-"||temp=="*"||temp=="/")
        {
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();

            if(temp=="+")
            {
                
                   int res= op1+op2;
                   st.push(res);
        
            }

                else if(temp=="-")
                {
                    int res=op1-op2;
                    st.push(res);
                    
                }
                 else if(temp=="*")
                {
                    int res=op1*op2;
                    st.push(res);
                    
                }
                 else
                {
                    int res=op1/op2;
                    
                    st.push(res);
                
                }
            
        }

            else
            {
              
              st.push(stoi(temp));

            }
    
     }

     return st.top();

    }
};