class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,w,h,area;
        int max=0;
        int j=height.size()-1;
      while(i<j)
      {
        w=j-i;
         h=min(height[i],height[j]);
         area=h*w;
         if(max<area)
         max=area;
         if(height[i]<height[j])
         i++;
         else
         j--;
      }

    return max;
    }
};