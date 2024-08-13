class Solution {
public:
    int minSetSize(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int> v;
        int count=1;
        for(int i=1;i<size(arr);i++)
        {
            if(arr[i]==arr[i-1])
            {
                count++;
            }
            else
            {
               v.push_back(count);
               count=1;
            }
        }
        if(arr[size(arr)-1]==arr[size(arr)-2])
            {
                v.push_back(count);
            }
        sort(v.begin(),v.end());
       int n=size(arr)/2;
        int ans=0;
     
        for(int i=size(v)-1;i>=0;i--)
        {
            ans++;
            n=n-v[i];
            if(n<=0)
            break;
        }
        return ans;
    }
};