class Solution {
public:
    string intToRoman(int num) {
       string s[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
       int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
       string ans="";
       int times;
       for(int i=0;i<sizeof(a) / sizeof(int);i++)
       {
        times=num/a[i];
        while(times--)
        {
          ans+=s[i];
        }
       num=num%a[i];
       }
    return ans;
    }
};