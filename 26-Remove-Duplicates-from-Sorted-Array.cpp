class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int  len=nums.size(),j=0;
        int count[100];
        for(int i=0;i<len;i++)
        {    
            while(i+1<len&&nums[i]==nums[i+1])
            {   
            
                i++;
            }
            if(i<len)
            {
            nums[j]=nums[i];
            j++;
            }

            
        }
        return j ;
    }
    };