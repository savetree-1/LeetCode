class Solution {
public:
     bool check(vector<int>&weights,int x,int days)
        {
            int tot=1;
            //int i=0;
            int prev=weights[0];
            for(int i=1;i<weights.size();i++)
            {
                if(weights[i]+prev<=x)
                {
                    prev+=weights[i];
                }
                else {prev=weights[i];
                    tot++;}
            }
            return tot<=days;
        }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int ans;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(check(weights,mid,days))
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
};