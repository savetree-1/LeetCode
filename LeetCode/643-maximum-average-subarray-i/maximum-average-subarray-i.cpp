class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double maxi=-1e4+1;
        double sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        int l=0;
        double avg=sum/k;
        maxi=max(maxi,avg);
        while(l+1<=n-k)
        {
            sum-=nums[l];
            sum+=nums[l+k];
            avg=sum/k;
            maxi=max(maxi,avg);
            l++;
        }
        return maxi;
    }
};