class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int res;
        sort(nums.begin(),nums.end());
        int mindiff=INT_MAX;
        for(int i=0;i<n;i++)
        {   
            
            int end=n-1;
            int start=i+1;
            int sum;
            while(start<end)
            {
                int diff=abs(target-(nums[i]+nums[start]+nums[end]));
                if(diff<mindiff)
                {   
                    sum=nums[i]+nums[start]+nums[end];
                    mindiff=diff;
                    res=sum;
                }
                else if(nums[i]+nums[start]+nums[end]<=target)
                start++;
                else
                 end--;
            }
        }
        return res;
    }
};