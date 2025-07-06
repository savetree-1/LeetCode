class Solution {
public:
    bool check(vector<int>&weights,int days,int maxi)
    {
        int d=1;
        int sum=0;
        for(int num:weights)
        {
            if(num>maxi)return false;
            if(sum+num>maxi){d++;sum=num;}
            else sum+=num;
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
       int low=1;int high=accumulate(weights.begin(),weights.end(),0);
       int ans=0;
       while(low<=high)
       {
        int mid=low+(high-low)/2;
        if(check(weights,days,mid)){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
       } 
       return ans;
    }
};