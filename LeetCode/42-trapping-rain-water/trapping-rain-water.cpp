class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int lmx=0;
        int rmx=0;
        int ans=0;
        while(left<right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>=lmx)
                {
                    lmx=height[left];
                }
                else
                {
                    ans+=lmx-height[left];
                }
                left++;
            }
            else
            {
              if(height[right]>=rmx)
                {
                    rmx=height[right];
                }
                else
                {
                    ans+=rmx-height[right];
                } 
                right--; 
            }
        }
        return ans;
    }
};