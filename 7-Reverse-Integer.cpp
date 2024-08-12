class Solution {
public:
    int reverse(int x) {
       long r=0;      // decleare r 
        while(x){
         r=r*10+x%10; // find remainder and add its to r
         x=x/10;     // Update the value of x
        }
        if(r> pow(2,31)-1|| r<-pow(2,31)) return 0; // check range if r is outside the range then return 0  
        return int(r);  // if r in the 32 bit range then return r
    }
    
};