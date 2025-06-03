class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        
       int sign=1;
        int result=0;
        int num=0;


        for(int i=0;i<s.length();i++)
        {
            char c=s[i];

            if (c == ' ') continue;  // Skip whitespace

            if(isdigit(c))
            {
                num=num*10+(c-'0');
            }
            else if(c=='+')
            {
                result=result+(num*sign);
                num=0;
                sign=1;
            }
            else if(c=='-')
            {
                result=result+(num*sign);
                num=0;
                sign=-1;
            }
            else if(c=='(')
            {
                st.push(result);
                st.push(sign);
                num=0;
                result=0;
                sign=1;                
            }

            else if(c==')')
            {
                result=result+(num*sign);
                num = 0;
                int prev_sign = st.top(); st.pop();
                int prev_result = st.top(); st.pop();
                result = prev_result + prev_sign * result;

            }
        }
                result += sign * num;

        return result;
    }
};