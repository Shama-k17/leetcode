class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        set<vector<int>> s;
        if(nums.size()<4)
        return {};
        int left,right;

        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
             right=nums.size()-1;
             left=j+1;

             while(left<right)
             {
                
               long long sum=nums[i];
                    sum+=nums[j];
                    sum+=nums[left];
                    sum+=nums[right];
                if(sum<=INT_MAX&&sum==target)
                {
                    s.insert({nums[i],nums[j],nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum<target)
                left++;
                else if(sum>target)
                right--;
             }
            
        }
        }
        for(auto e : s )
        {
            result.push_back(e);
        }
      return result;  
    }
};