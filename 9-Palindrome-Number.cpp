class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
       long num=x,
        rev=0;
        while(num!=0)
        {
            rev=rev*10+num%10;
            num=num/10;
        }
        if(rev==x&&rev>=INT_MIN&&rev<=INT_MAX)
        {
            return true;
        }
     return false;
    }
};