class Solution {
public:
    int divide(int dividend, int divisor) {
      
        if(divisor==0)
        return -1;
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
      int res=long(dividend)/long(divisor);
       if(res>INT_MAX)
       return INT_MAX;

       if(res<INT_MIN)
       return INT_MIN;
       return res; 
    }
};